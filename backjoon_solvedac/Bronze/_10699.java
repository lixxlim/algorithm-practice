/**
 * 문제
 * 서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 입력은 없다.
 * 
 * 출력
 * 서울의 오늘 날짜를 "YYYY-MM-DD" 형식으로 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.text.*;
import java.util.*;

public class _10699 {
  public static void main(String[] args) {
    System.out.println(
      new SimpleDateFormat("yyyy-MM-dd").format(new Date())
    );
  }
}