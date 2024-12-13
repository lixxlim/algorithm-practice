/**
 * https://www.acmicpc.net/problem/4335
 */
import java.io.*;
import java.util.*;

class Main {
	
	@FunctionalInterface interface Function { void run(int n); }
	
	static Map<String, Function> funcMap = new HashMap<>() {{
		put("too high", Main::tooHigh);
		put("too low", Main::tooLow);
		put("right on", Main::rightOn);
	}};
	
	static boolean[] t = new boolean[10];
	
	static {
		Arrays.fill(t, true);
	}
	
	static void tooHigh(int n) {
		for (int i = n; i < 10; i++) {
			t[i] = false;
		}
	}
	static void tooLow(int n) {
		for (int i = 0; i <= n; i++) {
			t[i] = false;
		}
	}
	static void rightOn(int n) {
		System.out.println(t[n] ? "Stan may be honest": "Stan is dishonest");
		Arrays.fill(t, true);
	}
	
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			while(true) {
				int n = Integer.parseInt(br.readLine());
				if (n == 0) break;
				funcMap.get(br.readLine()).run(n-1);
			}
		}
	}
}

