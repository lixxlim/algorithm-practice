// https://www.acmicpc.net/problem/11399
// 00:17:54
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;
import java.util.stream.IntStream;

public class S4_11399 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

			int n = Integer.parseInt(br.readLine());
            int[] p = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).sorted().toArray();
            
            System.out.println(
                IntStream.rangeClosed(1, n)
                         .map(e -> Arrays.stream(Arrays.copyOf(p, e)).sum())
                         .sum()
            );
		}
	}
}