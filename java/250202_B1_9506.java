/**
 * https://www.acmicpc.net/problem/9506
 */
import java.io.*;
import java.util.*;

class Main {
	
	private enum Step {
		GET_DIVISOR,
		CHECK_PERFECTNUM,
	}
	static Map<Step, Runnable> funcMap = new HashMap<>(){{
		put(Step.GET_DIVISOR, Main::getDivisor);
		put(Step.CHECK_PERFECTNUM, Main::checkPerfectnum);
	}};
	
	static int n;
	static Set<Integer> list = new HashSet<>();
	static StringBuilder sb = new StringBuilder();
	
	public static void main(String... args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in));
			var bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
			while((n = Integer.parseInt(br.readLine())) != -1) {
				Main.funcMap.get(Step.CHECK_PERFECTNUM).run();
			}
			bw.write(sb.toString());
			bw.flush();
		}
	}
	
	public static void getDivisor() {
		Main.list.clear();
		for(int i = 1; i * i <= n; i++) {
			if(n % i == 0) {
				Main.list.add(i);
				Main.list.add(n / i);
			}
		}
		Main.list.remove(n);
	}
	
	public static void checkPerfectnum() {
		Main.funcMap.get(Step.GET_DIVISOR).run();
		boolean isPerfectNum = Main.list.stream().mapToInt(Integer::intValue).sum() == n;
		if(isPerfectNum) {
			Main.sb.append( n + " = " + String.join(" + ", list.stream().sorted().map(String::valueOf).toArray(String[]::new)) + "\n" );
		} else {
			Main.sb.append( n + " is NOT perfect.\n" );
		}
	}
}
