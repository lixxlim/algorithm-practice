/**
 * https://www.acmicpc.net/problem/31134
 */
package main

import (
	"fmt"
	"os"
	"bufio"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var n uint64
	fmt.Fscan(rw, &n)
	for i := uint64(0); i < n; i++ {
		var m uint64
		fmt.Fscan(rw, &m)
		fmt.Fprintln(rw, m * 2 - 1)
	}
}
