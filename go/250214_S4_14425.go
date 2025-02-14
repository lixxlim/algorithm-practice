/**
 * https://www.acmicpc.net/problem/14425
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
	
	var n, m int
	fmt.Fscan(rw, &n, &m)
	
	ns := make(map[string]bool)
	for i := 0; i < n; i++ {
		var str string
		fmt.Fscan(rw, &str)
		ns[str] = true
	}
	
	res := 0
	for i := 0; i < m; i++ {
		var str string
		fmt.Fscan(rw, &str)
		if ns[str] {
			res++
		}
	}
	
	fmt.Fprintln(rw, res)
}
