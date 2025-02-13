/**
 * https://www.acmicpc.net/problem/10815
 */
import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

class Main {
	public static void main(String... args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			br.readLine();
			Set<Integer> ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).boxed().collect(Collectors.toSet());
			br.readLine();
			var sb = new StringBuilder();
			Arrays.stream(br.readLine().split(" "))
				.mapToInt(Integer::parseInt)
				.forEach(e -> {
					sb.append(ns.contains(e) ? "1 " : "0 ");
				});
			System.out.println(sb);
		}
	}
}
