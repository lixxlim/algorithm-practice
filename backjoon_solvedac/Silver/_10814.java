/**
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _10814 {

  public static void main(String[] args) {
    try {
      회원[] 회원리스트 = 입력받기();
      정렬하기(회원리스트);
      출력하기(회원리스트);
    } catch (Exception e) { e.printStackTrace();}
  }

  class 회원 {
    int 회원번호;
    int 나이;
    String 이름;
    회원(int 회원번호, int 나이, String 이름) {
      this.회원번호 = 회원번호;
      this.나이 = 나이;
      this.이름 = 이름;
    }
    @Override
    public String toString() {
      StringBuilder sb = new StringBuilder();
      sb.append(나이).append(" ").append(이름).append("\n");
      return sb.toString();
    }
  }

  public static 회원[] 입력받기() throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int 등록자수 = Integer.parseInt(br.readLine());
      회원[] 회원리스트 = new 회원[등록자수];
      _10814 main = new _10814();
      for(int i = 0; i < 등록자수; i++) {
        StringTokenizer st = new StringTokenizer(br.readLine());
        회원리스트[i] = main.new 회원(i, Integer.parseInt(st.nextToken()), st.nextToken());
      }
      return 회원리스트;
    } catch (Exception e) { throw new IOException();}
  }

  public static void 정렬하기(회원[] 회원리스트) {
    Arrays.sort(회원리스트, (회원1, 회원2) -> {
      if(회원1.나이 == 회원2.나이) return 회원1.회원번호 - 회원2.회원번호;
      return 회원1.나이 - 회원2.나이;
    });
  }

  public static void 출력하기(회원[] 회원리스트) throws IOException {
    StringBuffer sb = new StringBuffer();
    for(회원 회원: 회원리스트) { sb.append(회원.toString());}
    System.out.println(sb);
  }

}