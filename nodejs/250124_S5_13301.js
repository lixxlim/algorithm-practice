/**
 * https://www.acmicpc.net/problem/13301
 */
const n = Number(require('fs').readFileSync(0, 'utf-8').toString().trim());
const dp = new Array(n+1).fill(0);
dp[1] = 1;
for (let i = 2; i <= n; i++) {
	dp[i] = dp[i-1] + dp[i-2];
}
console.log((dp[n] + dp[n] + dp[n-1]) * 2)
