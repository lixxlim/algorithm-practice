/**
 * https://www.acmicpc.net/problem/2443
 * Time taken: 00:09:38
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try (var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			for (int i = 0; i < n; i++) {
				int hoshi = (2 * n) - (i * 2 + 1);
				System.out.println(" ".repeat(i) + "*".repeat(hoshi));
			}
		}
	}
}
