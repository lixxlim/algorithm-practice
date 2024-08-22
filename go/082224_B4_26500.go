/**
 * https://www.acmicpc.net/problem/26500
 */
package main

import (
	"bufio"
	"os"
	"fmt"
	"math"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var n int
	fmt.Fscan(rw, &n)
	
	for i := 0; i < n; i++ {
		var a, b, ret float32
		fmt.Fscan(rw, &a, &b)
		if a > b {
			ret = a - b
		} else {
			ret = b - a
		}
		fmt.Fprintf(rw, "%.1f\n", math.Round(ret*10)/10)
	}
}