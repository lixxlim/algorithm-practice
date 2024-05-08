/*
 * https://www.acmicpc.net/problem/11283
 */
import java.io.*;

class B4_11283 {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int line = br.read();
			System.out.println(line-'가'+1);
		}
	}
}
