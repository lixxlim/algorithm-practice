/**
 * https://www.acmicpc.net/problem/29725
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			Map<Character, Integer> map = new HashMap<>() {{
				put('.', 0);
				put('K', 0);
				put('P', 1);
				put('N', 3);
				put('B', 3);
				put('R', 5);
				put('Q', 9);
				put('k', 0);
				put('p', -1);
				put('n', -3);
				put('b', -3);
				put('r', -5);
				put('q', -9);
			}};
			
			StringBuilder sb = new StringBuilder();
			for(int i = 0; i < 8; i++) {
				sb.append(br.readLine());
			}
			int result = sb.toString().chars().mapToObj(v -> (char)v).mapToInt(map::get).sum();
			
			System.out.println(result);
		}
	}
}
