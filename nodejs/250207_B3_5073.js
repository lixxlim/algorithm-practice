/**
 * https://www.acmicpc.net/problem/5073
 */
const inp = require('fs').readFileSync(0, 'utf-8').toString().trim().split('\n');
inp.pop();

for ( let i = 0; i < inp.length; i++ ) {
	[ a, b, c ] = inp[ i ].trim().split(' ').map( Number ).sort((a, b) => a - b);
	if( a + b <= c ) {
		console.log( "Invalid" );
		continue;
	}
	if( a === c ) {
		console.log( "Equilateral" );
		continue;
	}
	if( a === b || b === c ) {
		console.log( "Isosceles" );
		continue;
	}
	if( a !== b && b !== c ) {
		console.log( "Scalene" );
		continue;
	}
}
