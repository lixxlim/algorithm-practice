/**
 * https://www.acmicpc.net/problem/31403
 */
import java.io.*;
import java.util.*;

class Main {
	
	@FunctionalInterface
	public interface TriFunction<T, U, V, R> {
		R apply(T t, U u, V v);
	}
	
	private enum Step {
		NUM,
		STR,
	}
	
	private static Map<Step, TriFunction<Integer, Integer, Integer, String>> funcMap = new HashMap<>(){{
		put(Step.NUM, Main::num);
		put(Step.STR, Main::str);
	}};
	
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int a = Integer.parseInt(br.readLine());
			int b = Integer.parseInt(br.readLine());
			int c = Integer.parseInt(br.readLine());
			System.out.println(funcMap.get(Step.NUM).apply(a, b, c));
			System.out.println(funcMap.get(Step.STR).apply(a, b, c));
		}
	}
	
	public static String num(int a, int b, int c) {
		return String.valueOf(a + b - c);
	}
	
	public static String str(int a, int b, int c) {
		return String.valueOf(Integer.parseInt(String.valueOf(a) + String.valueOf(b)) - c);
	}
}
