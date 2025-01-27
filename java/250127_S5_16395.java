/**
 * https://www.acmicpc.net/problem/16395
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken());
			int k = Integer.parseInt(st.nextToken());
			int[][] paskal = new int[n][k];
			paskal[0][0] = 1;
			for(int i = 1; i < n; i++) {
				paskal[i][0] = 1;
				for(int j = 1; j < k; j++) {
					int p = paskal[i-1][j-1] + paskal[i-1][j];
					if(p == 0) break;
					paskal[i][j] = p;
				}
			}
			System.out.println(paskal[n-1][k-1]);
		}
	}
}
