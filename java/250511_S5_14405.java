/**
 * https://www.acmicpc.net/problem/14405
 */
import java.io.*;
import java.util.*;
import java.util.regex.*;

class Main {
	public static void main(String[] args) throws IOException {
		try (Scanner scanner = new Scanner(System.in)) {
			String inp = scanner.next();
			Pattern pattern = Pattern.compile("^(pi|ka|chu)+$");
			System.out.println(
				pattern.matcher(inp).matches() ? "YES" : "NO"
			);
		}
	}
}
