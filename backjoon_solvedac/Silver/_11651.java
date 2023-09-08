/**
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _11651 {

  public static void main(String[] args) {
      try{
        int[][] values = getInput();
        solution(values);
      } catch (Exception e) { e.printStackTrace(); }
  }

  public static int[][] getInput() throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int loop = Integer.parseInt(br.readLine());
      int[][] values = new int[loop][2];
      for (int i = 0; i < loop; i++) {
        StringTokenizer st = new StringTokenizer(br.readLine());
        values[i][0] = Integer.parseInt(st.nextToken());
        values[i][1] = Integer.parseInt(st.nextToken());
      }
      return values;
    } 
  }

  public static void solution(int[][] values) {
    Arrays.sort(values, (v1, v2) -> {
      if(v1[1] == v2[1]) return v1[0] - v2[0];
      return v1[1] - v2[1];
    });
    StringBuilder sb = new StringBuilder();
    for(int[] value: values) { 
      sb.append(value[0])
        .append(" ")
        .append(value[1])
        .append("\n");
    }
    System.out.println(sb);
  }
}