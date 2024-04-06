// https://www.acmicpc.net/problem/10797
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var targetNo, result int
	fmt.Fscan(rw, &targetNo)

	cars := make([]int, 5)
	for i := range cars {
		fmt.Fscan(rw, &cars[i])
		if targetNo == cars[i] {
			result++
		}
	}

	fmt.Fprintln(rw, result)
}
