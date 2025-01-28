/**
 * https://www.acmicpc.net/problem/26529
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
	
	list := make([]int, 46)
	list[0] = 1
	list[1] = 1
	for i := 2; i < 46; i++ {
		list[i] = list[i-1] + list[i-2]
	}
	
	var x int
	fmt.Fscan(rw, &x)
	ans := make([]int, x)
	for i := 0; i < x; i++ {
		var y int
		fmt.Fscan(rw, &y)
		ans[i] = list[y]
	}
	
	for _, v := range ans {
		fmt.Fprintln(rw, v)
	}
}
