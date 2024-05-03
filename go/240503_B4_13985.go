// https://www.acmicpc.net/problem/13985
package main

import (
	"bufio"
	"fmt"
	"strconv"
	"strings"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	line, _ := rw.ReadString('\n')
	eq := strings.Fields(line)
	a, _ := strconv.Atoi(eq[0])
	b, _ := strconv.Atoi(eq[2])
	c, _ := strconv.Atoi(eq[4])
	result := a + b == c
	if result {
		fmt.Fprintln(rw, "YES")
	} else {
		fmt.Fprintln(rw, "NO")
	}
}
