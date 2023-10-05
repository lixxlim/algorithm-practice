// https://www.acmicpc.net/problem/1010
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S5_1010 {
	
	static int[][] dp = new int[30][30];
 
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
        while(n-- > 0) {
			st = new StringTokenizer(br.readLine(), " ");
			int N = Integer.parseInt(st.nextToken());
			int M = Integer.parseInt(st.nextToken());
			sb.append(combi(M, N)).append('\n');
		}
		System.out.println(sb);
	}
	
	static int combi(int n, int r) {
		if(dp[n][r] > 0) {
			return dp[n][r]; 
		}
		if(n == r || r == 0) {
			return dp[n][r] = 1;
		}
		return dp[n][r] = combi(n - 1, r - 1) + combi(n - 1, r);
	}
}