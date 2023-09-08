/**
 * 문제
 * 2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
 * 
 * 출력
 * 첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _11650 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int repeat = Integer.parseInt(br.readLine());
      String[] values = new String[repeat];
      for (int i = 0; i < repeat; i++) values[i] = br.readLine();
      solution(values);
    } catch (Exception e) {}
  }

  public static void solution(String[] values) {
    try(BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out))) {

    Arrays.stream(values)
      .sorted((v1,v2) -> {
        int x1 = Integer.parseInt(v1.split(" ")[0]);
        int x2 = Integer.parseInt(v2.split(" ")[0]);
        int y1 = Integer.parseInt(v1.split(" ")[1]);
        int y2 = Integer.parseInt(v2.split(" ")[1]);
        if(x1 == x2) return y1 - y2;
        return x1 - x2;
      })
      .forEach(v -> {
        try { bw.write(v + "\n"); } catch (Exception e) {}
      })
    ;
    bw.flush();

    } catch (Exception e) {};
  }

}