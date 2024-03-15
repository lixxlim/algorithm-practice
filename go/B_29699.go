// https://www.acmicpc.net/problem/29699
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	n := 0
	fmt.Fscan(rw, &n)

	str := "WelcomeToSMUPC"
	fmt.Fprintln(rw, string(str[(n-1)%14]))
}
