package backjoon_solvedac.Silver;
// https://www.acmicpc.net/problem/26170
// 00:51:01
import java.io.*;
import java.util.*;

public class S3_26170 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int[][] map = new int[5][];
            for(int i = 0; i < 5; i++) {
                map[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            }
            int[] loc = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int result = solution(map, loc[0], loc[1], 0, 0);
            System.out.println(result == Integer.MAX_VALUE? -1 : result);
		}
	}

	public static int solution(int[][] map, int x, int y, int num, int apple) {
        if(x < 0 || x > 4 || y < 0 || y > 4 || map[x][y] == -1) return Integer.MAX_VALUE;
        int tile = map[x][y];
        if(tile == 1 && ++apple == 3) return num;

        map[x][y] = -1;
        int[] result = new int[4];
        result[0] = solution(map, x+1, y, num+1, apple);
        result[1] = solution(map, x-1, y, num+1, apple);
        result[2] = solution(map, x, y+1, num+1, apple);
        result[3] = solution(map, x, y-1, num+1, apple);
        map[x][y] = tile;

        return Arrays.stream(result).min().getAsInt();
	}
}