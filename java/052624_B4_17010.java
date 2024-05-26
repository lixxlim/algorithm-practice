/*
 * https://www.acmicpc.net/problem/17010
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try (var br = new BufferedReader(new InputStreamReader(System.in))) {
			int L = Integer.parseInt(br.readLine());
			var sb = new StringBuilder();
			while(L-- > 0)
			{
				String[] Nx = br.readLine().split(" ");
				sb.append(Nx[1].repeat(Integer.parseInt(Nx[0]))).append("\n");
			}
			System.out.printf("%s", sb.toString());
		}
	}
}
