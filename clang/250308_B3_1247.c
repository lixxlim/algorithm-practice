/**
 * https://www.acmicpc.net/problem/1247
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CASE_LOOP 1
#define INPUT_MAX 21

int main( void );
char* get_input( void );
void calc_res( char*, char*, char* );
void reverseString( char* str );

int main( void ) {
	int n, i, j;
	char* cur;
	char* inp;
	char* temp;
	char res[ 2 ];
	size_t cur_size = INPUT_MAX;
	size_t new_size;
	
	for( i = 0; i < CASE_LOOP; i++ )
	{
		cur = ( char* )malloc( INPUT_MAX * sizeof( char ));
		strcpy( cur, "0" );
		memset( res, '\0', sizeof( res ));
		scanf( "%d\n", &n );
		for( j = 0; j < n; j++ )
		{
			inp = get_input();
			if( strlen( inp ) + strlen( cur ) >= cur_size )
			{
				new_size = cur_size + INPUT_MAX;
				temp = ( char* )realloc( cur, new_size * sizeof( char ));
				cur = temp;
				cur_size = new_size;
			}
			calc_res( inp, cur, res );
			free( inp );
		}
		printf( "res=%s\n", res );
		free( cur );
	}
	
	return 0;
}

char* get_input( void )
{
	char* inp;
	size_t len;
	
	inp = ( char* )calloc( INPUT_MAX, sizeof( char ));
	fgets( inp, sizeof( inp ), stdin );
	len = strlen( inp );
	if ( len > 0 && inp[ len - 1 ] == '\n' )
	{
		inp[ len - 1 ] = '\0';
	}
	return inp;
}

void calc_res( char* inp, char* cur, char* res )
{
	int inp_len;
	int cur_len;
	int inp_prefix;
	int cur_prefix;
	int loop;
	int i, j;
	int carry, inp_num, cur_num;
	
	inp_len = strlen( inp );
	cur_len = strlen( cur );
	loop = ( inp_len < cur_len ) ? inp_len : cur_len ;
	inp_prefix = ( atoi(inp) < 0 ) ? -1 : 1 ;
	cur_prefix = ( atoi(cur) < 0 ) ? -1 : 1 ;
	reverseString(inp);
	if( inp[ inp_len - 1 ] == '-' )
	{
		inp[ inp_len - 1 ] = '0'
	}
	
	for( i = 0; i < loop; i++ )
	{
		// TODO
	}
	
	strcpy( cur, inp );
	res[ 0 ] = '+';
}

void reverseString( char* str )
{
	int len = strlen( str );
	char* start = str;
	char* end = str + len - 1;
	char temp;
	
	while ( start < end )
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}
