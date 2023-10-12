// https://www.acmicpc.net/problem/1388
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S4_1388 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            char[][] floor = new char[ns[0]][];
            for(int i = 0; i < ns[0]; i++) {
                floor[i] = br.readLine().toCharArray();
            }
            System.out.println(solution(floor));
		}
	}

	public static int solution(char[][] floor) {
        int tiles = 0;
        for(int i = 0; i < floor.length; i++) {
            for(int j = 0; j < floor[i].length; j++) {
                if(floor[i][j] == 'x') continue;
                tiles++;
                if(floor[i][j] == '-') {
                    for(int x = j; x < floor[i].length; x++) {
                        if(floor[i][x] == '-') {
                            floor[i][x] = 'x';
                        } else { break; }
                    }
                }
                if(floor[i][j] == '|') {
                    for(int x = i; x < floor.length; x++) {
                        if(floor[x][j] == '|') {
                            floor[x][j] = 'x';
                        } else { break; }
                    }
                }
            }
        }
        return tiles;
	}
}