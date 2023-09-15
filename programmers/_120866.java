// https://school.programmers.co.kr/learn/courses/30/lessons/120866
package programmers;

import java.util.*;

public class _120866 {
	// public static void main(String[] args) throws Exception {
	// 	try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
	// 		int[][] board1 = new int[][]{{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}};
	// 		int[][] board2 = new int[][]{{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}};
	// 		System.out.println(solution(board1));
	// 		System.out.println(solution(board2));
	// 	}
	// }

	public static long solution(int[][] board) {
		for(int i = 0; i < board.length; i++) {
			for(int j = 0; j < board[i].length; j++) {
				if(board[i][j] == 1) {
					if(true)
						board[i+0][j+0] = 2;
					if(j > 0)
						if(board[i+0][j-1] == 0) board[i+0][j-1] = 2;
					if(j < board[i].length-1)
						if(board[i+0][j+1] == 0) board[i+0][j+1] = 2;

					if(i < board.length-1 && j > 0)
						if(board[i+1][j-1] == 0) board[i+1][j-1] = 2;
					if(i < board.length-1)
						if(board[i+1][j+0] == 0) board[i+1][j+0] = 2;
					if(i < board.length-1 && j < board[i].length-1)
						if(board[i+1][j+1] == 0) board[i+1][j+1] = 2;

					if(i > 0 && j > 0) 
						if(board[i-1][j-1] == 0) board[i-1][j-1] = 2;
					if(i > 0) 
						if(board[i-1][j+0] == 0) board[i-1][j+0] = 2;
					if(i > 0 && j < board[i].length-1) 
						if(board[i-1][j+1] == 0) board[i-1][j+1] = 2;
				}
			}
		}
		// for(int[] i : board) {
		// 	System.out.print("[");
		// 	for(int j : i) {
		// 		System.out.print(j + ", ");
		// 	}
		// 	System.out.println("]");
		// }
		System.out.println();
		return Arrays.stream(board)
					 .flatMapToInt(Arrays::stream)
					 .filter(v -> v == 0)
					 .count();
	}

	public static long solution2(int[][] board) {
		for(int i = 0; i < board.length; i++) {
			for(int j = 0; j < board[i].length; j++) {
                if(board[i][j] == 1) {
                    for(int x = -1; x < 2; x++) {
                        for(int y = -1; y < 2; y++) {
                            try {
                                if(board[i+x][j+y] != 1) board[i+x][j+y] = 2;
                            } catch (Exception e) {}
                        }
                    } 
                }
			}
		}
		return Arrays.stream(board)
					 .flatMapToInt(Arrays::stream)
					 .filter(v -> v == 0)
					 .count();
	}
}