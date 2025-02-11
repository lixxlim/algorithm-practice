/**
 * https://www.acmicpc.net/problem/32775
 */
package main

import (
	"fmt"
)

func main() {
	var s, f int
	fmt.Scan(&s, &f)
	if f < s {
		fmt.Println("flight")
	} else {
		fmt.Println("high speed rail")
	}
}
