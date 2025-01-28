/**
 * https://www.acmicpc.net/problem/16395
 */
const [ n, k ] = require('fs').readFileSync(0, 'utf-8').toString().trim().split(' ').map(Number);
const tri = Array.from({ length: n }, () => Array(k).fill(0));
tri[0][0] = 1;
for(let i = 1; i < n; i++) {
	tri[i][0] = 1;
	for(let j = 1; j < k; j++) {
		const t = tri[i-1][j-1] + tri[i-1][j];
		if(t === 0) break;
		tri[i][j] = t;
	}
}
console.log(tri[n-1][k-1]);
