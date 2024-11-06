/**
 * https://www.acmicpc.net/problem/28352
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			long n = Long.parseLong(br.readLine());
			long amt = n;
			while(--n >= 2) {
				amt *= n;
			}
			System.out.println(amt / 60 / 60 / 24 / 7);
		}
	}
}
