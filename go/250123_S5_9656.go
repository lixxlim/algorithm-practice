/**
 * https://www.acmicpc.net/problem/9656
 */
package main

import ( "fmt" )

func main() {
	var n int
	fmt.Scan(&n)
	
	if n % 2 == 1 {
		fmt.Print("CY\n")
	} else {
		fmt.Print("SK\n")
	}
}
