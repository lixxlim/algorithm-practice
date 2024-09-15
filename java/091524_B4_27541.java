/**
 * https://www.acmicpc.net/problem/27541
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			String str = br.readLine();
			if(str.charAt(n-1) == 'G') {
				System.out.println(str.substring(0, n-1));
			} else {
				System.out.println(str + "G");
			}
		}
	}
}
