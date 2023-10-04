// 
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;

public class S3_1463 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int count = 0;
			System.out.println(rec(n, count));
		}
	}

    public static int rec(int n, int count) {
        if(n < 2) return count;
        return Math.min(rec(n/3, count+1+(n%3)),rec(n/2, count+1+(n%2)));
    }
}