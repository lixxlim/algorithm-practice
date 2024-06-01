/*
 * https://www.acmicpc.net/problem/17874
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
	
	line, _ := rw.ReadString('\n')
	eq := strings.Fields(line)
	n, _ := strconv.Atoi(eq[0])
	h, _ := strconv.Atoi(eq[1])
	v, _ := strconv.Atoi(eq[2])
	
	fmt.Fprintf(rw, "%d\n", getGregCake(n, h, v))
}

func getGregCake(n, h, v int) int {
	gregH := getBigger(h, n-h)
	gregV := getBigger(v, n-v)
	return gregH * gregV * 4
}

func getBigger(x, y int) int {
	if x >= y { return x }
	return y
}
