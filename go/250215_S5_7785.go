/**
 * https://www.acmicpc.net/problem/7785
 */
package main

import (
	"fmt"
	"sort"
	"bufio"
	"os"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	
	var n int
	fmt.Fscan(r, &n)
	
	office := make(map[string]bool)
	for i := 0; i < n; i++ {
		var name, log string
		fmt.Fscan(r, &name, &log)
		if log == "enter" {
			office[name] = true
		} else {
			delete(office, name)
		}
	}
	keys := make([]string, 0, len(office))
	for k := range office {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	for i := len(office) - 1; i >= 0; i-- {
		fmt.Fprintln(w, keys[i])
	}
}
