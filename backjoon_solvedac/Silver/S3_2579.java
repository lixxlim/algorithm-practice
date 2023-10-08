// https://www.acmicpc.net/problem/2579
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;

public class S3_2579 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int[] stairs = new int[n+1];
            Integer[] db = new Integer[n+1];
            stairs[0] = 0;
            for(int i = 1; i <= n; i++) {
                stairs[i] = Integer.parseInt(br.readLine());
            }
            db[0] = stairs[0];
            db[1] = stairs[1];
            if(n >= 2) {db[2] = stairs[1]+stairs[2];}
            System.out.println(solution(db, stairs, n));
		}
	}

	public static int solution(Integer[] db, int[] stairs, int n) {
        if(db[n] == null) {
            db[n] = Math.max(solution(db, stairs, n-2), solution(db, stairs, n-3)+ stairs[n-1]) + stairs[n];
        }
        return db[n];
	}
}