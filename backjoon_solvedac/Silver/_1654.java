// https://www.acmicpc.net/problem/1654
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _1654 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            long k = Long.parseLong(st.nextToken());
            long[] cables = new long[n];
            long max = 0;
            while(n-- > 0) { max = Math.max(max, cables[n] = Long.parseLong(br.readLine())); }
            System.out.println(
                solution2(cables, k, max)
            );
		}
	}

    public static long solution2(long[] arr, long n, long max) {
        long half = 0;
        long min = 1;

		while(min < max) {
			half = (min + max)/2;
			long count = 0;

			for(long num : arr) { count += num / half; }

			if(count < n) { max = half-1; }
			else { min = half+1; }
		}
		return (max+min)/2;
	}

}