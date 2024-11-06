/**
 * https://www.acmicpc.net/problem/28295
 */
import java.io.*;

class Main {
	private static int order = 10;
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int ret = 0;
			while(order-- > 0) {
				ret += Integer.parseInt(br.readLine());
			}
			System.out.println(
					switch(ret%4) {
						case 1 -> "E";
						case 2 -> "S";
						case 3 -> "W";
						default -> "N";
					}
			);
		}
	}
}
