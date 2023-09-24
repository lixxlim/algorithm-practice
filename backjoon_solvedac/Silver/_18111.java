// https://www.acmicpc.net/problem/18111
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _18111 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int block = Integer.parseInt(st.nextToken());
            int[][] map = new int[n][m];
            int topFloor = 0, bottomFloor = 256;
            for(int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine());
                for(int j = 0; j < m; j++) {
                    map[i][j] = Integer.parseInt(st.nextToken());
                    topFloor = Math.max(topFloor, map[i][j]);
                    bottomFloor = Math.min(bottomFloor, map[i][j]);
                }
            }
            System.out.println(
                solution(map, block, topFloor, bottomFloor)
            );
		}
	}

	public static String solution(int[][] map, int block, int topFloor, int bottomFloor) {
        int time = Integer.MAX_VALUE, floor = topFloor;
        for(int i = bottomFloor; i <= topFloor; i++) {
            int result = checkFloor(map, i, block);
            if(result <= time) { time = result; floor = i; }
        }
        return String.format("%d %d", time, floor);
	}

    public static int checkFloor(int[][] map, int targetFloor, int block) {
        int time = 0;
        for(int i = 0; i < map.length; i++) {
            for(int j = 0; j < map[i].length; j++) {
                int dist = map[i][j] - targetFloor;
                if(dist > 0) {
                    time += dist * 2;
                    block += dist;
                }
                if(dist < 0) {
                    time += Math.abs(dist);
                    block += dist;
                }
            }
        }
        if(block < 0) return Integer.MAX_VALUE;
        return time;
    }
}