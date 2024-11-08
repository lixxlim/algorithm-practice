/**
 * https://www.acmicpc.net/problem/28431
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			List<Integer> sk = new ArrayList<>();
			int n = 5;
			while(n-- > 0) {
				Integer s = Integer.parseInt(br.readLine());
				if(sk.contains(s)) {
					sk.remove(s);
				} else {
					sk.add(s);
				}
			}
			System.out.println(sk.get(0));
		}
	}
}
