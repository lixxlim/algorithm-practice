package backjoon_solvedac.Graph;
// https://www.acmicpc.net/problem/3182
// 00:00:00
import java.io.*;

public class S3_3182 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            // input
			int n = Integer.parseInt(br.readLine());
            int[] senpai = new int[n+1];
            for(int i = 1; i <= n; i++) {
                senpai[i] = Integer.parseInt(br.readLine());
            }

            // process
            int max = 0;
            int result = 0;
            for(int i = 1; i <= n; i++) {
                int num = solution(senpai.clone(), 1, i);
                if(max < num) {
                    result = i;
                    max = num;
                }
            }

            // output
            System.out.println(result);
		}
	}

	public static int solution(int[] senpai, int num, int prev) {
        if(senpai[prev] == -1) return num;
        int next = senpai[prev];
        senpai[prev] = -1;
        return solution(senpai, num+1, next);
	}
}