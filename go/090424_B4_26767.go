/**
 * https://www.acmicpc.net/problem/26767
 */
package main

import (
	"fmt"
	"bufio"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var n int
	fmt.Fscan(rw, &n)

	for i := 1; i <= n; i++ {
		if i % 7 == 0 && i % 11 == 0 {
			fmt.Fprintln(rw, "Wiwat!")
		} else if i % 11 == 0 {
			fmt.Fprintln(rw, "Super!")
		} else if i % 7 == 0 {
			fmt.Fprintln(rw, "Hurra!")
		} else {
			fmt.Fprintln(rw, i)
		}
	}
}