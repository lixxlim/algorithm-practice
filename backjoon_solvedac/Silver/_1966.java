// https://www.acmicpc.net/problem/1966
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;
import java.util.Map.*;
import java.util.AbstractMap.*;

public class _1966 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringBuilder result = new StringBuilder();
			int tests = Integer.parseInt(br.readLine());
            for(int i = 0; i < tests; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int n = Integer.parseInt(st.nextToken());
                int m = Integer.parseInt(st.nextToken());
                int[] list = Arrays.stream(br.readLine().split(" "))
                                           .mapToInt(Integer::parseInt)
                                           .toArray();
                result.append(solution(n, m, list)).append("\n");
            }
            System.out.println(result);
		}
	}

    public static int solution(int n, int m, int[] list) {
        LinkedList<Entry<Integer, Integer>> q = new LinkedList<>();
        for(int i = 0; i < n; i++) {
            q.offer(new SimpleEntry<Integer, Integer>(i, list[i]));
        }
        int result = 0;
        while(!q.isEmpty()) {
            boolean max = true;
            int targetPriority = q.peek().getValue();
            for(Entry<Integer,Integer> e: q) {
                if(targetPriority < e.getValue()) {
                    max = false;
                    break;
                }
            }
            if(max) { 
                result++;
                int printed = q.poll().getKey();
                if(printed == m) return result;
            } else {
                q.offer(q.poll());
            }
        }
        return -1;
    }
}