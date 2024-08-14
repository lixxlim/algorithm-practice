/**
 * https://www.acmicpc.net/problem/25932
 */
package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	"strconv"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	cases := []string {
		"none",
		"mack",
		"zack",
		"both",
	}
	
	var n int
	fmt.Fscan(rw, &n)
	rw.ReadString('\n')
	for i := 0; i < n; i++ {
		inp, _ := rw.ReadString('\n')
		parts := strings.Split(strings.TrimSpace(inp), " ")
		res := 0
		for _, part := range parts {
			num, _ := strconv.Atoi(part)
			if num == 18 {
				res += 1
			}
			if num == 17 {
				res += 2
			}
		}
		fmt.Fprint(rw, inp, cases[res], "\n\n")
	}
}
