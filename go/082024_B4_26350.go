/**
 * https://www.acmicpc.net/problem/26350
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
	for n > 0 {
		n--
		var m int
		fmt.Fscan(rw, &m)
		var arr []int
		arr = make([]int, m)
		fmt.Fprint(rw, "Denominations:")
		for i := 0; i < m; i++ {
			fmt.Fscan(rw, &arr[i])
			fmt.Fprint(rw, " ", arr[i])
		}
		flg := true
		for i := 1; i < m; i++ {
			if arr[i-1] * 2 > arr[i] {
				flg = false
				fmt.Fprint(rw, "\nBad coin denominations!\n\n")
				break
			}
		}
		if flg {
			fmt.Fprint(rw, "\nGood coin denominations!\n\n")
		}
	}
}