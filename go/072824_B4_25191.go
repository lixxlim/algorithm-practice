/**
 * https://www.acmicpc.net/problem/25191
 */
package main

import (
	"bufio"
	"os"
	"fmt"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var c, k, m int
	fmt.Fscan(rw, &c, &k, &m)
	fmt.Fprintln(rw, min(c, k / 2 + m))
}

func min(x, y int) int {
	if x > y {
		return y
	}
	return x
}
