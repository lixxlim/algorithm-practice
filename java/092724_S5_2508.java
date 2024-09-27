/**
 * https://www.acmicpc.net/problem/2508
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in));
            var bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
            int n = Integer.parseInt(br.readLine());
            while(n-- > 0) {
                br.readLine();
                var st = new StringTokenizer(br.readLine());
                int h = Integer.parseInt(st.nextToken());
                int w = Integer.parseInt(st.nextToken());
                char[][] board = new char[h][w];
                for(int i = 0; i < h; i++) {
                    board[i] = br.readLine().toCharArray();
                }
                int ans = 0;
                for(int i = 0; i < h; i++) {
                    for(int j = 0; j < w; j++) {
                        if(board[i][j] == 'o' &&
                            ((i > 0 && board[i-1][j] == 'v' && i < h-1 && board[i+1][j] == '^') ||
                            (j > 0 && board[i][j-1] == '>' && j < w-1 && board[i][j+1] == '<'))) {
                            ans++;
                        }
                    }
                }
                bw.write(ans + "\n");
            }
        }
    }
}