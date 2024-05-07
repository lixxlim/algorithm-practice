/** 
 * https://www.acmicpc.net/problem/11282 
 */
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var i rune;
	fmt.Fscan(rw, &i)
	fmt.Fprintf(rw, "%c\n", i-1 + '가')
}
