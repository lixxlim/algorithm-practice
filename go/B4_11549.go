package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	var t int
	fmt.Fscan(rw, &t)

	var taster [5]int
	for i := 0; i < 5; i++ {
		fmt.Fscan(rw, &taster[i])
	}

	total := 0
	for _, num := range taster {
		if num == t {
			total++
		}
	}

	fmt.Println(total)
}
