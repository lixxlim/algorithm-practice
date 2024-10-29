/**
 * https://www.acmicpc.net/problem/28097
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			String[] inp = br.readLine().split(" ");
			int ret = Integer.parseInt(inp[0]);
			for(int i = 1; i < inp.length; i++) {
				ret += 8 + Integer.parseInt(inp[i]);
			}
			System.out.printf("%d %d\n", ret/24, ret%24);
		}
	}
}
