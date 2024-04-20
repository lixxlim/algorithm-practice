// https://www.acmicpc.net/problem/13136

package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var r, c, n float64
	fmt.Fscan(rw, &r, &c, &n)

	fmt.Fprintf(rw, "%.0f", math.Ceil(r/n)*math.Ceil(c/n))
}
