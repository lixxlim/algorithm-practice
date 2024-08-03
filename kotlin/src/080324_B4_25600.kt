fun main(args: Array<String>) = with(System.`in`.bufferedReader()) {
	var ret = 0
	var n = readLine().toInt()
	for (i in 1..n) {
		var (a, d, g) = readLine().split(" ").map { it.toInt() }
		var sum = a * (d + g)
		if (a == (d + g)) {
			sum *= 2
		}
		ret = maxOf(ret, sum)
	}
    println("$ret")
}
