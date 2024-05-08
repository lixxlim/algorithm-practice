/*
 * https://www.acmicpc.net/problem/11283
 */
 package main

 import (
	 "fmt"
	 "bufio"
	 "os"
 )

 func main() {
	 rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	 defer rw.Flush()
	
	 var c rune
	 fmt.Fscanf(rw, "%c", &c)
	 fmt.Fprintf(rw, "%d\n", int(c)-int('가')+1)
 }
