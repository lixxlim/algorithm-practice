# https://www.acmicpc.net/problem/19947
h, y = map( int, input().split() )
money = [ 0 ] * ( y + 1 )
money[ 0 ] = h
for i in range( 1, y + 1 ):
    money[ i ] = money[ i - 1 ] * 105 // 100
    if i >= 3 :
        money[ i ] = max( money[ i - 3 ] * 120 // 100, money[ i ] )
    if i >= 5 :
        money[ i ] = max( money[ i - 5 ] * 135 // 100, money[ i ] )

print( money[ y ] )
