package backjoon_solvedac.Silver;
// https://www.acmicpc.net/problem/26169
// 01:07:54
import java.io.*;
import java.util.*;

public class S3_26169 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int[][] map = new int[5][];
            for(int i = 0; i < 5; i++) {
                map[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            }
            int[] rc = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            System.out.println(solution(map, rc[0], rc[1], 0, 0) ? 1 : 0);
		}
	}

	public static boolean solution(int[][] map, int x, int y, int move, int apple) {
        if (x < 0 || x >= 5 || y < 0 || y >= 5 || move > 3 || map[x][y] == -1) {
            return false;
        }
        int v = map[x][y]; map[x][y] = -1;
        if(v == 1 && ++apple == 2) return true;

        boolean result = 
            solution(map, x+1, y, move+1, apple) ||  
            solution(map, x-1, y, move+1, apple) ||
            solution(map, x, y+1, move+1, apple) ||
            solution(map, x, y-1, move+1, apple) ;
        map[x][y] = v;

        return result;
	}
}