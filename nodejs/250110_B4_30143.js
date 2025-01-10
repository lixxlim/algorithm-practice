/**
 * https://www.acmicpc.net/problem/30143
 */

const fs = require('fs');
const inp = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const n = Number(inp[0]);
for (let i = 1; i <= n; i++) {
	let sum = 0;
	const nad = inp[i].trim().split(" ");
	for (let i = 0; i < Number(nad[0]); i++) {
		sum += Number(nad[1]) + ( i * Number(nad[2]) );
	}
	console.log(sum);
}

