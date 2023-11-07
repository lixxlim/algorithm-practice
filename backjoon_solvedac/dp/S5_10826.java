package backjoon_solvedac.dp;
// https://www.acmicpc.net/problem/10826
// 00:20:35
import java.io.*;
import java.math.*;

public class S5_10826 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            BigInteger[] dp = new BigInteger[n+2];
            solution(n, dp);
		}
	}

	public static void solution(int n, BigInteger[] dp) {
        dp[0] = new BigInteger("0");
        dp[1] = new BigInteger("1");
        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i-1].add(dp[i-2]);
        }
        System.out.println(dp[n]);
	}
}