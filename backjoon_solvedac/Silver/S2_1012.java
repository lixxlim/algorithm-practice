// https://www.acmicpc.net/problem/1012
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S2_1012 {
	
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			StringBuilder sb = new StringBuilder();
			while(n-- > 0) {
				int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				int[][] map = new int[ns[0]][ns[1]];
				while(ns[2]-- > 0) {
					String[] st = br.readLine().split(" ");
					int x = Integer.parseInt(st[0]);
					int y = Integer.parseInt(st[1]);
					map[x][y] = 1;
				}
				sb.append(checkMap(map)).append("\n");
			}
			System.out.println(sb);
		}
	}
	
	public static int checkMap(int[][] map) {
		int result = 0;
		try {
			for(int i = 0; i < map.length; i++) {
				for(int j = 0; j < map[0].length; j++) {
					if(map[i][j] != 1) continue; 
					result++;
					markupMap(map, i, j);
				}
			}
		} catch (Exception e) {}
		return result;
	}

	public static void markupMap(int[][] map, int i, int j) {
		map[i][j] = -1;
		try {if(map[i-1][j] == 1) markupMap(map, i-1, j);} catch(Exception e){};
		try {if(map[i+1][j] == 1) markupMap(map, i+1, j);} catch(Exception e){};
		try {if(map[i][j-1] == 1) markupMap(map, i, j-1);} catch(Exception e){};
		try {if(map[i][j+1] == 1) markupMap(map, i, j+1);} catch(Exception e){};
	}
	
}
