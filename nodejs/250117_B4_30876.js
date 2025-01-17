/**
 * https://www.acmicpc.net/problem/30876
 */

console.log(
	 require('fs')
	.readFileSync(0, 'utf-8')
	.toString()
	.trim()
	.split('\n')
	.slice(1)
	.map(v => v.split(" ").map(Number))
	.reduce((acc, cur) => { return cur[1] < acc[1] ? cur : acc; })
	.join(" ")
)
