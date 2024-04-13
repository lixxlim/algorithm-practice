// https://www.acmicpc.net/problem/11257
package main

import (
	"bufio"
	"fmt"
	"os"
)

const (
	PASS_LINE_FOR_TOTAL = 55
	PASS_RATE_FOR_EACH  = 0.3
	STRATEGY_RATE       = 35
	MANAGEMENT_RATE     = 25
	TECHNOLOGY_RATE     = 40
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var n int
	fmt.Fscanln(rw, &n)
	for i := 0; i < n; i++ {
		var no, s, m, t int
		fmt.Fscanf(rw, "%d %d %d %d\n", &no, &s, &m, &t)
		sum := s + m + t
		fmt.Fprintf(rw, "%d %d %s\n", no, sum, checkPass(sum, s, m, t))
	}
}

func checkPass(sum, s, m, t int) (passOrFail string) {
	passOrFail = "FAIL"
	strategyPass := float64(s) >= STRATEGY_RATE*PASS_RATE_FOR_EACH
	managementPass := float64(m) >= MANAGEMENT_RATE*PASS_RATE_FOR_EACH
	technologyPass := float64(t) >= TECHNOLOGY_RATE*PASS_RATE_FOR_EACH
	isAllPass := sum >= PASS_LINE_FOR_TOTAL && strategyPass && managementPass && technologyPass
	if isAllPass {
		passOrFail = "PASS"
	}
	return
}
