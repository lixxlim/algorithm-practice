/**
 * https://www.acmicpc.net/problem/30585
 */

const [ n, ...lines ] = require('fs').readFileSync(0, 'utf-8').toString().trim().split('\n');
const [ r, c ] = n.split(' ').map(Number);
let sum = [ ...lines.join('') ].map(ch => +ch).reduce((a, c) => a + c, 0);
console.log(Math.min(sum, r * c - sum));
