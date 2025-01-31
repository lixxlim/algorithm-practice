/**
 * https://www.acmicpc.net/problem/25644
 */
import java.io.*;
import java.util.*;

class Main {
	
	static int n;
	static int max, min;
	static int[] arr;
	
	public static void main(String... args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			n = Integer.parseInt(br.readLine());
			arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			
			max = 0;
			min = Integer.MAX_VALUE;
			for(int i : arr) {
				max = Math.max(i - min, max);
				min = Math.min(i, min);
			}
			
			System.out.println(max);
		}
	}
}
