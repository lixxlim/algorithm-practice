/**
* wibeba4968@nausard.com
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
	
	var p, r float64
	fmt.Fscanf(rw, "%f %f", &p, &r)
	
	switch {
		case p < r * 0.2:
			fmt.Println("weak")
		case p < r * 0.4:
			fmt.Println("normal")
		case p < r * 0.6:
			fmt.Println("strong")
		default:
			fmt.Println("very strong")
	}
}
