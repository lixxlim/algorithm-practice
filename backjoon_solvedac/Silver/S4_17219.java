// https://www.acmicpc.net/problem/17219
// 00:07:49
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S4_17219 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			Map<String, String> passwordMap = new HashMap<>();
			StringBuilder sb = new StringBuilder();
			while(ns[0]-- > 0) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				passwordMap.put(st.nextToken(), st.nextToken());
			}
			while(ns[1]-- > 0) {
				sb.append(passwordMap.get(br.readLine()))
				  .append("\n");
			}
			System.out.println(sb);
		}
	}
}