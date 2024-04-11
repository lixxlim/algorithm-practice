// // https://www.acmicpc.net/problem/10987
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var str string
	fmt.Fscan(rw, &str)

	resp := 0
	for i := 0; i < len(str); i++ {
		switch str[i] {
		case 'a', 'e', 'i', 'o', 'u':
			resp++
		}
	}
	fmt.Fprintf(rw, "%d\n", resp)
}
