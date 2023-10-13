// https://www.acmicpc.net/problem/16173
// 01:12:12
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S4_16173 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int[][] map = new int[n][];
            for(int i = 0; i < n; i++) {
                map[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            }
            System.out.println( solution(map)? "HaruHaru" : "Hing" );
		}
	}

	public static boolean solution(int[][] map) {
        return dfs(map, 0, 0) == -1;
	}

    public static int dfs(int[][] map, int x, int y) {
        int n = map.length;
        int j = map[x][y];
        if(j == -1) return -1;
        if(x+j < n && y+j < n) return Math.min(dfs(map, x+j, y),dfs(map, x, y+j));
        if(x+j < n) return dfs(map, x+j, y);
        if(y+j < n) return dfs(map, x, y+j);
        return Integer.MAX_VALUE;
    }
}