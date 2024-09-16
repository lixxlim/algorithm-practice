/**
 * https://www.acmicpc.net/problem/27918
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int d = 0, p = 0;
			while(n-- > 0) {
				String s = br.readLine();
				if("D".equals(s)) d++;
				if("P".equals(s)) p++;
				if(d > p+1 || p > d+1) break;
			}
			System.out.printf("%d:%d\n", d, p);
		}
	}
}
