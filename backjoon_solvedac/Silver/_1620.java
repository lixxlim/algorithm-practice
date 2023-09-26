// https://www.acmicpc.net/problem/1620
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _1620 {

    private static HashMap<String, Integer> zukanName = new HashMap<>();
    private static HashMap<Integer, String> zukanCode = new HashMap<>();

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

			StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());

            for(int i = 1; i <= n; i++) {
                String s = br.readLine();
                zukanName.put(s, i);
                zukanCode.put(i, s);
            }

            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < m; i++) {
                String s = br.readLine();
                if(Character.isDigit(s.charAt(0))) {
                    sb.append(zukanCode.get(Integer.parseInt(s))).append("\n");
                } else {
                    sb.append(zukanName.get(s)).append("\n");
                }
            }
            System.out.println(sb);
            
		}
	}
}