/**
 * https://www.acmicpc.net/problem/26592
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			StringBuilder sb = new StringBuilder();
			int n = Integer.parseInt(br.readLine());
			while( n-- > 0 ) {
				double[] inp = Arrays.stream(br.readLine().split(" ")).mapToDouble(Double::parseDouble).toArray();
				sb.append(String.format("The height of the triangle is %.2f units\n", inp[0] * 2.0 / inp[1]));
			}
			System.out.print(sb);
		}
	}
}
