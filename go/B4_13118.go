package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
	defer rw.Flush()

	line, _ := rw.ReadString('\n')
	apple, _ := rw.ReadString('\n')
	people := strings.Fields(line)
	peopleSize := len(people)
	appleX, _ := strconv.Atoi(strings.Fields(apple)[0])

	resultChan := make(chan int, peopleSize)

	for i := 0; i < peopleSize; i++ {
		go findMatchPerson(people[i], appleX, i+1, resultChan)
	}

	res := 0
	for i := 0; i < peopleSize; i++ {
		res += <-resultChan
	}

	fmt.Fprintln(rw, res)
}

func findMatchPerson(people string, appleX, index int, resultChan chan<- int) {
	peopleX, _ := strconv.Atoi(people)
	if peopleX == appleX {
		resultChan <- index
	} else {
		resultChan <- 0
	}
}
