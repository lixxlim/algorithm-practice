/*
 * https://www.acmicpc.net/problem/21638
 */
package main

import (
	 "bufio"
	 "os"
	 "fmt"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()
	
	messages := [4]string{
		"No message",
		"A storm warning for tomorrow! Be careful and stay home if possible!",
		"MCHS warns! Low temperature is expected tomorrow.",
		"MCHS warns! Strong wind is expected tomorrow.", 
	}
	var t1, v1, t2, v2 int
	fmt.Fscan(rw, &t1, &v1, &t2, &v2)
	
	msgNo := 0
	if t2 < 0 && v2 >= 10 {
		msgNo = 1
	} else if t2 < t1 {
		msgNo = 2
	} else if v2 > v1 {
		msgNo = 3
	}
	fmt.Fprintf(rw, "%s\n", messages[msgNo])
}
