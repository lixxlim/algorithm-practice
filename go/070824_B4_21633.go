/*
 * https://www.acmicpc.net/problem/21633
 */
 package main

 import (
	 "bufio"
	 "fmt"
	 "os"
	 "math"
 )

 func main() {
	 rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	 defer rw.Flush()
	 
	 var amt float64
	 fmt.Fscan(rw, &amt)
	 ret := math.Min(2000, math.Max(100, 25 + amt * 0.01))
	 fmt.Fprintf(rw, "%.2f\n", ret)
 }
