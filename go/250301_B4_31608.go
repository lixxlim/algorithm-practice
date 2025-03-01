/**
 * https://www.acmicpc.net/problem/31608
 */
package main

import (
	"fmt"
)

func main() {
	var n, cnt int
	var a, b string

	fmt.Scan(&n)
	fmt.Scan(&a)
	fmt.Scan(&b)

	for i := 0; i < n; i++ {
		if a[i] != b[i] {
			cnt++
		}
	}

	fmt.Println(cnt)
}
