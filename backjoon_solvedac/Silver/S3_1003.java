// https://www.acmicpc.net/problem/1003
// 01:18:14
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.Arrays;

public class S3_1003 {

    static int[][] pivo = new int[41][2];
    static { 
        for(int[] arr : pivo) Arrays.fill(arr, -1);
        pivo[0][0] = 1; pivo[0][1] = 0;
        pivo[1][0] = 0; pivo[1][1] = 1;
    }

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            StringBuilder sb = new StringBuilder();

            while(n-- > 0) {
                int[] result = fibonacci(Integer.parseInt(br.readLine()));
                sb.append(result[0])
                  .append(" ")
                  .append(result[1])
                  .append("\n");
            }
            System.out.println(sb);

		}
	}

    static int[] fibonacci(int n) {
        if(pivo[n][0] == -1 || pivo[n][1] == -1) {
            pivo[n][0] = fibonacci(n-1)[0] + fibonacci(n-2)[0];
            pivo[n][1] = fibonacci(n-1)[1] + fibonacci(n-2)[1];
        } 
        return pivo[n];
    }
}