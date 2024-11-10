/**
 * https://www.acmicpc.net/problem/29736
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			StringBuilder sb = new StringBuilder(br.readLine()).append(" ").append(br.readLine());
			StringTokenizer st = new StringTokenizer(sb.toString());
			int A = Integer.parseInt(st.nextToken());
			int B = Integer.parseInt(st.nextToken());
			int K = Integer.parseInt(st.nextToken());
			int X = Integer.parseInt(st.nextToken());
			int lt = K - X;
			int rt = K + X;
			if(A > rt || B < lt) {
				System.out.println("IMPOSSIBLE");
			} else {
				int left = Math.max(A, lt);
				int right = Math.min(B, rt);
				System.out.println(right - left + 1);
			}
		}
	}
}
