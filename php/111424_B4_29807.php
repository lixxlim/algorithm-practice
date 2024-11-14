/**
 * https://www.acmicpc.net/problem/29807
 */
<?php
	fgets(STDIN);
	$tokens = explode(" ", trim(fgets(STDIN)));
	
	$hangle = isset($tokens[0]) ? (int)$tokens[0] : 0;
	$math = isset($tokens[1]) ? (int)$tokens[1] : 0;
	$english = isset($tokens[2]) ? (int)$tokens[2] : 0;
	$tamgu = isset($tokens[3]) ? (int)$tokens[3] : 0;
	$daini = isset($tokens[4]) ? (int)$tokens[4] : 0;
	
	$gakuban = 0;
	$gakuban += $hangle > $english ? ($hangle - $english) * 508 : ($english - $hangle) * 108;
	$gakuban += $math > $tamgu ? ($math - $tamgu) * 212 : ($tamgu - $math) * 305;
	$gakuban += $daini > 0 ? $daini * 707 : 0;
	$gakuban *= 4763;
	
	echo $gakuban . PHP_EOL;
?>

