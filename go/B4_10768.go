// https://www.acmicpc.net/problem/10768
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var m, d int
	fmt.Fscan(rw, &m, &d)
	md := m*100 + d
	fmt.Fprintln(rw, compDate(md, "0218"))
}

func compDate(md int, strComp string) string {
	intComp, err := strconv.Atoi(strComp)
	if err != nil {
		return ""
	}

	switch {
	case intComp > md:
		return "Before"
	case intComp < md:
		return "After"
	case intComp == md:
		return "Special"
	default:
		return ""
	}
}
