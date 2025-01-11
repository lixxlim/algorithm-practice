/**
 * https://www.acmicpc.net/problem/30156
 */
const [ n, ...inp ] = require("fs").readFileSync(0, "utf-8").toString().trim().split("\n");

for(let i = 0; i < Number(n); i++) {
	let ab = [ 0, 0 ];
	for(let j = 0; j < inp[ i ].length; j++) {
		ab[ inp[i].charCodeAt(j) - 97 ]++;
	}
	console.log(Math.min(...ab));
}
