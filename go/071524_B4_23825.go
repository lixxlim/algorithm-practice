/**
 * https://www.acmicpc.net/problem/23825
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
	
	var n, m int
	fmt.Fscan(rw, &n, &m)
	
	n /= 2
	m /= 2
	ret := n
	if( n > m ) {
		ret = m
	}
	
	fmt.Fprintln(rw, ret)
}
