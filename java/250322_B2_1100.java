/**
 * https://www.acmicpc.net/problem/1100
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try (var br = new BufferedReader(new InputStreamReader(System.in))) {
			int sum = 0;
			for (int i = 0; i < 8; i++) {
				var inp = br.readLine().toCharArray();
				for (int j = i % 2; j < 8; j += 2) {
					if (inp[j] == 'F') {
						sum++;
					}
				}
			}
			System.out.println(sum);
		}
	}
}
