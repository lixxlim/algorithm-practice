/**
 * https://www.acmicpc.net/problem/26566
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	
	static final double PI = 3.14159265358979;
	
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			String[] pz = { "Whole pizza", "Slice of pizza" };
			StringBuilder sb = new StringBuilder();
			int n = Integer.parseInt(br.readLine());
			while( n-- > 0 ) {
				int[] slicepz = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				int[] wholepz = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				int shoudIGetWholePz = slicepz[0] * wholepz[1] > (wholepz[0] * wholepz[0] * PI) * slicepz[1] ? 1 : 0;
				sb.append(pz[shoudIGetWholePz]).append("\n");
			}
			System.out.println(sb);
		}
	}
}
