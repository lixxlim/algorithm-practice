/**
 * https://www.acmicpc.net/problem/25625
 */
package main

import (
	"bufio"
	"os"
	"fmt"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var x, y int
	fmt.Fscan(rw, &x, &y)
	
	ret := func(x, y int) int {
		if x > y { 
			return x + y 
		}
		return y - x
	}
	
	fmt.Fprintln(rw, ret(x, y))
}
