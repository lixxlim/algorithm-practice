// https://www.acmicpc.net/problem/2606
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S3_2606 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int m = Integer.parseInt(br.readLine());

            Boolean[] zombi = new Boolean[n+1];
            Arrays.fill(zombi, false);

            Map<Integer, List<Integer>> network = new HashMap<>();
            for(int i = 1; i <= n; i++) {
                network.put(i, new ArrayList<Integer>());
            }

            while(m-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int from = Integer.parseInt(st.nextToken());
                int to = Integer.parseInt(st.nextToken());
                network.get(from).add(to);
                network.get(to).add(from);
            }

            Queue<Integer> que = new LinkedList<>();
            que.offer(1);
            while(!que.isEmpty()) {
                int t = que.poll();
                zombi[t] = true;
                if(network.get(t).size() == 0) continue;
                for(var i : network.get(t)) {
                    if(zombi[i]) continue;
                    que.offer(i);
                    zombi[i] = true;
                }
            }

            System.out.println(
                Arrays.stream(zombi).filter(v -> v).count()
            );
		}
	}
}