/**
 * https://www.acmicpc.net/problem/26057
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
	
	var l, t int
	fmt.Fscan(rw, &l, &t)
	
	fmt.Fprintln(rw, t - (l - t))
}
