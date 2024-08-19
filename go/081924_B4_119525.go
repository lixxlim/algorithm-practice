/**
 * https://www.acmicpc.net/board/view/119525
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
	
	var n int
	fmt.Fscan(rw, &n)
	for i := 0; i < n; i++ {
		var h, w, c int
		fmt.Fscan(rw, &h, &w, &c)
		fmt.Fprintln(rw,"Data set:", h, w, c)
		for j := 0; j < c; j++ {
			if h > w {
				h /= 2
			} else {
				w /= 2
			}
		}
		if h < w {
			temp := h
			h = w
			w = temp
		}
		fmt.Fprintln(rw,h, w, "\n")
	}
}
