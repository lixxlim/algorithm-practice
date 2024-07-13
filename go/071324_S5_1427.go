/**
 * https://www.acmicpc.net/problem/1427
 */
package main

import (
	"bufio"
	"os"
	"fmt"
	"sort"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	var input string
	fmt.Fscanf(rw, "%s", &input)
	
	runes := []rune(input)
	sort.Slice(runes, func(i, j int) bool {
		return runes[i] > runes[j]
	})
	
	fmt.Fprintf(rw, "%s\n", string(runes))
}
