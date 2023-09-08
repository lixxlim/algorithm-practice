/**
 * 문제
 * 평면에 네 개의 직사각형이 놓여 있는데 그 밑변은 모두 가로축에 평행하다. 이 네 개의 직사각형들은 서로 떨어져 있을 수도 있고, 겹쳐 있을 수도 있고, 하나가 다른 하나를 포함할 수도 있으며, 변이나 꼭짓점이 겹칠 수도 있다.
 * 
 * 이 직사각형들이 차지하는 면적을 구하는 프로그램을 작성하시오.
 * 
 * 입력
 * 입력은 네 줄이며, 각 줄은 직사각형의 위치를 나타내는 네 개의 정수로 주어진다. 첫 번째와 두 번째의 정수는 사각형의 왼쪽 아래 꼭짓점의 x좌표, y좌표이고 세 번째와 네 번째의 정수는 사각형의 오른쪽 위 꼭짓점의 x좌표, y좌표이다. 모든 x좌표와 y좌표는 1이상이고 100이하인 정수이다.
 * 
 * 출력
 * 첫 줄에 네개의 직사각형이 차지하는 면적을 출력한다.
 */
package Silver;

import java.io.*;
import java.util.*;

public class _2669 {
  public static void main(String[] args) {
      try{
        int[][] square = getInput();
        int[][] map = new int[101][101];
        solution(map, square);
      } catch (Exception e) { e.printStackTrace(); }
  }

  public static int[][] getInput() throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int[][] in = new int[4][4];
      for(int i = 0; i < 4; i++) {
        in[i] = Arrays.stream(br.readLine().split(" "))
          .mapToInt(Integer::parseInt)
          .toArray();
      }
      return in;
    } 
  }

  public static void solution(int[][] map, int[][] square) {
    for(int[] s : square) {
      for(int x = s[0]; x < s[2]; x++) {
        for(int y = s[1]; y < s[3]; y++) {
          map[x][y] = 1;
        }
      }
    }
    System.out.println(
      Arrays.stream(map)
        .flatMapToInt(Arrays::stream)
        .sum()
    );
  }
}