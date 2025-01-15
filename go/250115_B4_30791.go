/**
 * https://www.acmicpc.net/problem/30791
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
	
	var c []int = make([]int, 5)
	for i := 0; i < 5; i++ {
		fmt.Fscanf(rw, "%d", &c[i])
	}
	
	var sum = 0
	for i := 1; i < 5; i++ {
		if c[i] >= c[0] - 1000 {
			sum += 1
		} 
	}
	
	fmt.Fprintf(rw, "%d\n", sum)
}
