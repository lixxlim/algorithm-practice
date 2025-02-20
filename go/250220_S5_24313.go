/**
 * https://www.acmicpc.net/problem/24313
 */
package main

import (
	"fmt"
)

func main() {
	var a1, a0, c, n0 int
	fmt.Scan(&a1, &a0, &c, &n0)
	
	if a1 > c {
		fmt.Println(0)
		return
	}
	
	if a1 == c {
		if a0 <= 0 {
			fmt.Println(1)
		} else {
			fmt.Println(0)
		}
		return
	}
	
	if a1*n0+a0 <= c*n0 {
		fmt.Println(1)
	} else {
		fmt.Println(0)
	}
}
