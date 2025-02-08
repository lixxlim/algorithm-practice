/**
 * https://www.acmicpc.net/problem/14215
 */
package main

import (
	"fmt"
	"bufio"
	"os"
	"sort"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	s := make([]int, 3, 3)
	fmt.Fscan(rw, &s[0], &s[1], &s[2])
	sort.Ints(s)
	
	if s[0] + s[1] <= s[2] {
		s[2] = s[0] + s[1] - 1
	}
	res := s[0] + s[1] + s[2]
	
	fmt.Fprintln(rw, res)
}
