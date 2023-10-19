package backjoon_solvedac.Silver;
// https://www.acmicpc.net/problem/1260
// 00:00:00
import java.io.*;
import java.util.*;

public class S2_1260 {

    static StringBuilder sb = new StringBuilder();

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[][] graph1 = new int[ns[0]][ns[1]];
            int[][] graph2 = new int[ns[0]][ns[1]];
            for(int i = 0; i < ns[1]; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int s = Integer.parseInt(st.nextToken());
                int e = Integer.parseInt(st.nextToken());
                graph1[s][e] = graph2[s][e] = 1;
                graph1[e][s] = graph2[e][s] = 1;
            }
            Queue<Integer> queue = new LinkedList<>(); queue.offer(ns[2]);
            Stack<Integer> stack = new Stack<>(); stack.push(ns[2]);
            dfs(graph1, queue); System.out.println(sb);
            sb.setLength(0);
            bfs(graph2, stack); System.out.println(sb);
		}

	}

    public static boolean dfs(int[][] graph, Queue<Integer> queue) {
        while(!queue.isEmpty()) {
            int target = queue.poll();
            sb.append(target).append(" ");
            for(int i = 0; i < graph[target].length; i++) {
                if(graph[target][i] == 1) { queue.offer(i); }
            }

        }
        graph[target] = null;
        return false;
    }

    public static String bfs(int[][] graph, Stack<Integer> stack) {
        int target = stack.pop();
        return "";
    }

}