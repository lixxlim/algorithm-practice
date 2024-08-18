/**
 * https://www.acmicpc.net/problem/26332
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
	
	var n int
	fmt.Fscan(rw, &n)
	
	for i := 0; i < n; i++ {
		var c, p int
		fmt.Fscan(rw, &c, &p)
		fmt.Fprintf(rw, "%d %d\n%d\n", c, p, c * (p - 2) + 2)
	}
}
