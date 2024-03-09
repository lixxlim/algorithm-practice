// https://www.acmicpc.net/problem/28113
package main

import (
	"fmt"
)

func main() {
	var n, a, b int
	fmt.Scan(&n, &a, &b)
	ans := "Anything"
	if a > b {
		ans = "Subway"
	}
	if n > b || a < b {
		ans = "Bus"
	}
	fmt.Println(ans)
}
