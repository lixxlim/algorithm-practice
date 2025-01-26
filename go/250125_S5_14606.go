/**
 * https://www.acmicpc.net/problem/14606
 */
package main

import (
	"fmt"
)

func main () {
	var n int
	fmt.Scan(&n)
	
	fun := make([]int, n+1)
	for i := 2; i <= n; i++ {
		v1 := i / 2
		v2 := i - v1
		fun[i] = (v1 * v2) + fun[v1] + fun[v2];
	}
	
	fmt.Printf("%d\n", fun[n])
}
