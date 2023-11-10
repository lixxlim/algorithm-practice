package backjoon_solvedac.Silver2;
// https://www.acmicpc.net/problem/9375
// 00:38:09
import java.io.*;
import java.util.*;

public class S3_9375 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringBuilder sb = new StringBuilder();
			int cases = Integer.parseInt(br.readLine());
            while(cases-- > 0) {
                int m = Integer.parseInt(br.readLine());
                Map<String, Integer> items = new HashMap<>();
                while(m-- > 0) {
                    String item = br.readLine().split(" ")[1];
                    items.put(item, items.containsKey(item) ? items.get(item)+1 : 1);
                }
                int result = 1;
                for(int i : items.values()) {
                    result *= (i + 1);
                }
                sb.append(result-1).append("\n");
            }
            System.out.println(sb);
		}
	}
}