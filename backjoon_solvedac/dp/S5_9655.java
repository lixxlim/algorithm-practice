package backjoon_solvedac.dp;
// https://www.acmicpc.net/problem/9655
// 00:24:21
import java.io.*;

public class S5_9655 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            // input
			int n = Integer.parseInt(br.readLine());

            // process
            boolean result = solution(n);

            // output
			System.out.printf(result ? "SK" : "CY");
		}
	}

	public static boolean solution(int n) {
        return n%2 == 1;
	}
}