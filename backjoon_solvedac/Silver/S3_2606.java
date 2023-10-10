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
            HashMap<Integer, HashSet<Integer>> network = new HashMap<>();
            while(m-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int from = Integer.parseInt(st.nextToken());
                int to = Integer.parseInt(st.nextToken());
                if(!network.containsKey(from)) network.put(from, new HashSet<Integer>(to));
                if(network.containsKey(from)) network.get(from).add(to);
                if(!network.containsKey(to)) network.put(to, new HashSet<Integer>(from));
                if(network.containsKey(to)) network.get(to).add(from);
                
            }
            System.out.println(network);
            Queue<Integer> q = new LinkedList<>();
            q.offer(1);zombi[1] = true;
            while(!q.isEmpty()) {
                try {
                    for(var i : network.get(q.poll())) {
                        if(zombi[i]) q.poll();
                        if(!zombi[i]) { q.offer(i); zombi[i] = true; }
                    }
                } catch (NullPointerException e) {}
            }
            System.out.println(
                Arrays.stream(zombi).filter(v -> v).count()
            );
		}
	}
}