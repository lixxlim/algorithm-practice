/**
 * https://www.acmicpc.net/problem/26068
 */
package main

import (
	"bufio"
	"os"
	"fmt"
	"strings"
	"strconv"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var n, ret int
	fmt.Fscan(rw, &n)
	rw.ReadString('\n')
	for i := 0; i < n; i++ {
		d, _ := rw.ReadString('\n')
		parts := strings.Split(strings.TrimSpace(d), "-")
		dd, _ := strconv.Atoi(parts[1])
		if dd <= 90 {
			ret++
		}
	}
	fmt.Fprintln(rw, ret)
}
