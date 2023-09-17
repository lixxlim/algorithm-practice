// 
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _18110 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int[] ns = new int[n];
            for(int i = 0; i < n; i++) ns[i] = Integer.parseInt(br.readLine());
            long ex = Math.round(n * 0.15);
            double sum = Arrays.stream(ns).sorted().skip(ex).limit(n-(ex*2)).sum();
            System.out.println(
                Math.round(sum / (n-(ex*2)))
            );
		}
	}

    public static void solution2() throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int[] ns = new int[n];
            for(int i = 0; i < n; i++) ns[i] = Integer.parseInt(br.readLine());
            long ex = Math.round(n * 0.15);
            System.out.println(
                Math.round(Arrays.stream(ns).sorted().skip(ex).limit(n-(ex*2)).average().getAsDouble())
            );
		}
	}
}