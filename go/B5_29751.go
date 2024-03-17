// https://www.acmicpc.net/problem/29751
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	w, h := 0.0, 0.0
	fmt.Fscan(rw, &w)
	fmt.Fscan(rw, &h)

	tri := w * h / 2
	fmt.Fprintf(rw, "%.1f\n", tri)
}
