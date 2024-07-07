/*
 * https://www.acmicpc.net/board/view/85780
 */
package main

import (
	"fmt"
	"os"
	"bufio"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin),bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var a, b int
	fmt.Fscan(rw, &a, &b)
	
	var res int
	if (a+2) > b {
		res = b;
	} else {
		res = a + 1
	}
	fmt.Fprintf(rw, "%d\n", res)
}
