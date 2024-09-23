/**
 * https://www.acmicpc.net/problem/27182
 */
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var n, m int
	fmt.Fscan(rw, &n, &m)

	var ret int
	if n > 7 {
		ret = n - 7
	} else {
		ret = m + 7
	}
	fmt.Fprintln(rw, ret)
}
