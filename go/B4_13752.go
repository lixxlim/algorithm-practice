package main

import (
	"bufio"
	"os"
	"fmt"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var n, m int
	fmt.Fscan(rw, &n)
	for i := 0; i < n; i++ {
		fmt.Fscan(rw, &m)
		for j := 0; j < m; j++ {
			fmt.Fprint(rw, "=")
		}
		fmt.Fprint(rw, "\n")
	}
}
