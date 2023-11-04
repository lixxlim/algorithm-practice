package backjoon_solvedac.Silver2;
// https://www.acmicpc.net/problem/9095
// 00:00:00
import java.io.*;

public class S2_9095 {

    static final int[] dp = new int[11];
    static {
        dp[1] = 1; dp[2] = 2; dp[3] = 4;
    }

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            StringBuilder sb = new StringBuilder();
            while(n-- > 0) {
                int number = Integer.parseInt(br.readLine());
                int result = check(number);
                sb.append(result).append("\n");
            }
		}
	}

	private static int check(int t) {
        if(dp[t] == 0) {
            dp[t] = check(t-1) + check(t-2) + check(t-3);
        }
        return dp[t];
    }
}