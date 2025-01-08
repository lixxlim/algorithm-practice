/**
 * https://www.acmicpc.net/problem/30067
 */
package main

import (
	"os"
	"bufio"
	"fmt"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var sum int
	var num [10]int
	for i := 0; i < 10; i++ {
		fmt.Fscan(rw, &num[i])
		sum += num[i]
	}
	
	for _, v := range num {
		if sum - v == v {
			fmt.Fprintln(rw, v)
			break
		}
	}
}
