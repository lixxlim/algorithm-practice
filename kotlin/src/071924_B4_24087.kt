fun main(args: Array<String>) = with(System.`in`.bufferedReader()) {
    val s = readLine().toInt()
    val a = readLine().toInt()
    val b = readLine().toInt()
    var ret = 250
    if (s > a) {
	ret += ((s - a - 1) / b + 1) * 100
    }
    println("$ret")
}
