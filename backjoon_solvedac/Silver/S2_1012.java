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
				sb.append(checkMap(createMap(new int[ns[0]][ns[1]], ns[3]))).append("\n");
			}
			System.out.println(sb);
		}
	}
	
	public static int[][] createMap(int[][] map, int n) {
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
			for(int i = 0; i < map[0].lenth; i++) {
				for(jnt j = 0; j < map[0][0].lenth; j++) {
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
		for(int x = i-1; x <= i+1; x++) {
			for(int y = j-1; y <= j+1; y++) {
				if(map[x][y] != 1) continue;
				markupMap(map, x, y);
			}
		}
	}
	
}
