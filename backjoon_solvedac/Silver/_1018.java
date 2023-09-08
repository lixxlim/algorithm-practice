/**
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _1018 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      int m = Integer.parseInt(st.nextToken());
      char[][] board = new char[n][m];
      for(int i = 0; i < n; i++) { 
        String s = br.readLine();
        for(int j = 0; j < m; j++) {
          board[i][j] = s.charAt(j);
        }
      }
      solution(n, m, board);
      } catch (Exception e) { e.printStackTrace(); }
  }

  public static void solution(int n, int m, char[][] board) {
    //어느 부분을 잘라낼 것인지를 판단하고
    int result = 64, temp = 0;
    for(int i = 0; i <= n-8; i++) {
      for(int j = 0; j <= m-8; j++) {

        //해당 판에서 8 x 8 영역을 서치
        char pivot = 'W';
        for(int x = 0; x < 8; x++) {
          for(int y = 0; y < 8; y++) {
            if((x+y)%2 == 0) {
              temp += board[i+x][j+y] == pivot ? 0 : 1;
            } else {
              temp += board[i+x][j+y] != pivot ? 0 : 1;
            }
          }
        }
        if(temp < result) result = temp;
        temp = 0;

        //반대서치
        pivot = 'B';
        for(int x = 0; x < 8; x++) {
          for(int y = 0; y < 8; y++) {
            if((x+y)%2 == 0) {
              temp += board[i+x][j+y] == pivot ? 0 : 1;
            } else {
              temp += board[i+x][j+y] != pivot ? 0 : 1;
            }
          }
        }
        if(temp < result) result = temp;
        temp = 0;
      }
    }

    //갯수를 프린트
    System.out.println(result);
  }
  
}