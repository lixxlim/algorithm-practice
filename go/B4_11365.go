//// https://www.acmicpc.net/problem/11365

package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	for {
		str, _ := rw.ReadString('\n')
		str = strings.TrimSpace(str)
		if str == "END" {
			break
		}
		fmt.Fprintln(rw, reverse(str))
	}
}

func reverse(str string) string {
	runes := []rune(str)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}
