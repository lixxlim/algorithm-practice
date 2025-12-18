/**
 * https://www.acmicpc.net/problem/2527
 */
data class Square(val x: Int, val y: Int, val p: Int, val q: Int)

fun check(s1: Square, s2: Square): Char {
	val dx = minOf(s1.p, s2.p) - maxOf(s1.x, s2.x)
	val dy = minOf(s1.q, s2.q) - maxOf(s1.y, s2.y)
	return when {
		dx < 0 || dy < 0 -> 'd'
		dx == 0 && dy == 0 -> 'c'
		dx == 0 || dy == 0 -> 'b'
		else -> 'a'
	}
}

fun main() = with(System.`in`.bufferedReader()) {
	repeat(4) {
		val num = readLine()!!.split(" ").map { it.toInt() }
		val s1 = Square(num[0], num[1], num[2], num[3])
		val s2 = Square(num[4], num[5], num[6], num[7])
		println(check(s1, s2))
	}
	
}
