// https://www.acmicpc.net/problem/29163
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

	inp, res := 0, 0
	for i := 0; i < n; i++ {
		fmt.Fscan(rw, &inp)
		if inp&1 == 0 {
			res++
		} else {
			res--
		}
	}

	fmt.Fprintln(rw, func() string {
		if res > 0 {
			return "Happy"
		} else {
			return "Sad"
		}
	}())
}
