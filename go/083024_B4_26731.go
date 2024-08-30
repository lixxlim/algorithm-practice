/**
 * https://www.acmicpc.net/problem/26731
 */
package main

import (
	"bufio"
	"os"
	"fmt"
	"strings"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	inp, _ := rw.ReadString('\n')
	for i := 'A'; i <= 'Z'; i++ {
		if !strings.Contains(inp, string(i)) {
			fmt.Fprintf(rw, "%c\n", i)
			break
		}
	}
}
