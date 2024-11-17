/**
 * https://www.acmicpc.net/problem/28490
 */

<?php
	
	$n = (int) trim(fgets(STDIN));
	
	$maxArea = 0;
	
	for ($i = 0; $i < $n; $i++) {
		$input = explode(' ', trim(fgets(STDIN)));
		$h = (int) $input[0];
		$w = (int) $input[1];
		
		$maxArea = max($maxArea, $h * $w);
	}
	
	echo $maxArea . "\n";
	
?>
