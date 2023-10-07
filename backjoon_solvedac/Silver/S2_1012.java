// https://www.acmicpc.net/problem/1012
// 00:00:00
import java.io.*;
import java.util.*;

public class S2_1012 {
	
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			StringBuilder sb = new StringBuilder();
			while(n-- > 0) {
				int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				sb.append(checkMap(createMap(new int[ns[0]][ns[1]], ns[2]))).append("\n");
			}
			System.out.println(sb);
		}
	}
	
	public static int[][] createMap(int[][] map, int n) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			while(n-- > 0) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				int x = Integer.parseInt(st.nextToken());
				int y = Integer.parseInt(st.nextToken());
				map[x][y] = 1;
			}
		}
		return map;
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
