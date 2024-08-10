/**
 * https://www.acmicpc.net/problem/1439
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			var S = br.readLine().toCharArray();
			
			int ret = (
				(int)Math.ceil(
					IntStream.range(0, S.length-1)
							 .filter(i -> S[i] != S[i+1])
							 .count() / 2.0
				)
			);
			
			System.out.println(ret);
		}
	}
}
