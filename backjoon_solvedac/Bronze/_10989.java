/**
 */
package backjoon_solvedac.Bronze;

import java.io.*;
import java.util.*;

public class _10989 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int 전체갯수 = Integer.parseInt(br.readLine());
      int[] 전체배열 = new int[전체갯수];
      for (int i = 0; i < 전체갯수; i++) 전체배열[i] = Integer.parseInt(br.readLine());

      Arrays.sort(전체배열);
      StringBuilder sb = new StringBuilder();
      for(int 개별 : 전체배열) {
        sb.append(개별).append("\n");
      }
      System.out.println(sb);
    } catch (Exception e) {}
  }

}