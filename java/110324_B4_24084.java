/*
 * https://www.acmicpc.net/problem/24084
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			String s = br.readLine();
			StringBuilder sb = new StringBuilder();
			for(int i = 0; i < n-1; i++) {
				if(s.charAt(i+1) == 'J') {
					sb.append(s.charAt(i)).append('\n');
				}
			}
			System.out.println(sb);
		}
	}
}
