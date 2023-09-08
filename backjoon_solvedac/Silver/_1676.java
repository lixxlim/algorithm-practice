/**
 * 문제
 * N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)
 * 
 * 출력
 * 첫째 줄에 구한 0의 개수를 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;

public class _1676 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int n = Integer.parseInt(br.readLine());
      solution(n);
    } catch (Exception e) {}
  }

  public static void solution(int n) {
    int result = 0;
    for(int i = 4; i > 0; i--) {
      result += n / Math.pow(5, i);
    }
    System.out.println(result);
  }

}