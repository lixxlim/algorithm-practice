package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var rw = bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var n int
	fmt.Fscan(rw, &n)

	type Score struct {
		point   int
		penalty int
	}

	scoreBoard := [11]Score{
		{point: 12, penalty: 1600},
		{point: 11, penalty: 894},
		{point: 11, penalty: 1327},
		{point: 10, penalty: 1311},
		{point: 9, penalty: 1004},
		{point: 9, penalty: 1178},
		{point: 9, penalty: 1357},
		{point: 8, penalty: 837},
		{point: 7, penalty: 1055},
		{point: 6, penalty: 556},
		{point: 6, penalty: 773},
	}

	fmt.Fprintf(rw, "%d %d\n", scoreBoard[n-1].point, scoreBoard[n-1].penalty)
}
