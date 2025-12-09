/**
 * https://www.acmicpc.net/problem/14247
 */

fun main() = with(System.`in`.bufferedReader()) {
	val n = readLine().toInt()
	val H = readLine().split(" ").map { it.toLong() }.toLongArray()
	val A = readLine().split(" ").map { it.toLong() }.toLongArray()
	
	val idx = (0 until n).sortedWith { x, y ->
		if (A[x] != A[y]) A[x].compareTo(A[y]) else x.compareTo(y)
	}
	
	var ans = 0L
	for (i in 0 until n) {
		val v = idx[i]
		ans += H[v] + i.toLong() * A[v]
	}
	println(ans)
}

