// https://www.acmicpc.net/problem/28235
package main

import (
	"fmt"
)

func main() {
	myMap := map[string]string{
		"SONGDO":    "HIGHSCHOOL",
		"CODE":      "MASTER",
		"2023":      "0611",
		"ALGORITHM": "CONTEST",
	}
	var say string
	fmt.Scan(&say)
	fmt.Println(myMap[say])
}
