/**
 * https://www.acmicpc.net/problem/30585
 */

fun main(args: Array<String>) = with(System.`in`.bufferedReader()) {
	var v1 = 0 ; var v2 = 0
	var inp = readLine().split(" ").map { it.toInt() }
	for (i in 1..inp[0]) {
		var line = readLine()
		for (j in 0..inp[1]-1) {
			v1 += if (line[j] == '0') 1 else 0 
			v2 += if (line[j] == '1') 1 else 0
		}
	}
	println(minOf(v1, v2))
}
