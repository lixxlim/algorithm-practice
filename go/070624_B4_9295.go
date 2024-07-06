/*
 * https://www.acmicpc.net/problem/9295
 */
package main

import (
	"fmt"
	"os"
	"bufio"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin),bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var n int
	fmt.Fscanf(rw, "%d", &n)
	for i := 1; i <= n; i++ {
		var a, b int
		fmt.Fscanf(rw, "\n%d %d", &a, &b)
		fmt.Fprintf(rw, "Case %d: %d\n", i, a + b)
	}
}
