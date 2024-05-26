/*
 * https://www.acmicpc.net/problem/17010
 */
package main

import (
	"fmt"
	"os"
	"bufio"
	"strings"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var L int
	fmt.Fscanf(rw, "%d\n", &L)
	for i := 0; i < L; i++ {
		var N int
		var x rune
		fmt.Fscanf(rw, "%d %c\n", &N, &x)
		fmt.Fprintf(rw, "%s\n", strings.Repeat(string(x), N))
	}
}
