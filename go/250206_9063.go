/**
 * https://www.acmicpc.net/problem/9063
 */
package main

import (
	"fmt"
	"bufio"
	"os"
	"math"
)

func maxInt(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func minInt(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var n int
	fmt.Fscan(rw, &n)
	
	maxX, maxY := math.MinInt, math.MinInt
	minX, minY := math.MaxInt, math.MaxInt
	for i := 0; i < n; i++ {
		var x, y int
		fmt.Fscan(rw, &x, &y)
		maxX = maxInt(maxX, x)
		maxY = maxInt(maxY, y)
		minX = minInt(minX, x)
		minY = minInt(minY, y)
	}
	fmt.Fprintf(rw, "%d\n", (maxX - minX) * (maxY - minY))
}
