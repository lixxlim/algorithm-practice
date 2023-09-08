/**
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

class 휴먼 {

  int 몸무게;
  int 키;
  int 덩치순위;

  public 휴먼(int 몸무게, int 키) {
    this.몸무게 = 몸무게;
    this.키 = 키;
  }

  @Override
  public String toString() {
    return String.valueOf(덩치순위 + " ");
  }

}

public class _7568 {
  
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int 인원수 = Integer.parseInt(br.readLine());
      휴먼[] 우리반 = new 휴먼[인원수];

      for (int i = 0; i < 인원수; i++) {
        StringTokenizer st = new StringTokenizer(br.readLine());
        int 몸무게 = Integer.parseInt(st.nextToken());
        int 키 = Integer.parseInt(st.nextToken());
        우리반[i] = new 휴먼(몸무게, 키);
      }

      for(int i = 0; i < 인원수; i++) {
        순위정하기(우리반, 우리반[i]);
      }

      for(휴먼 휴먼 : 우리반) {
        System.out.print(휴먼);
      }

    } catch (Exception e) {}
  }

  public static void 순위정하기(휴먼[] 우리반, 휴먼 휴먼) {
    int 순위 = 1;
    for(휴먼 상대휴먼: 우리반) {
      if(상대휴먼.몸무게 > 휴먼.몸무게 && 상대휴먼.키 > 휴먼.키) 순위++;
    }
    휴먼.덩치순위 = 순위;
  }

}