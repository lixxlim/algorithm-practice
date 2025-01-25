/**
 * https://www.acmicpc.net/problem/14606
 */
const n = Number(require('fs').readFileSync(0, 'utf-8').toString().trim());
const happiness = new Array(n+1).fill(0);
for(let i = 2; i <= n; i++) {
	const v1 = Math.trunc(i / 2);
	const v2 = i - v1;
	happiness[i] = (v1 * v2) + happiness[v1] + happiness[v2];
}
console.log(happiness[n]);
