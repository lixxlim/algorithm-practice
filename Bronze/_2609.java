/**
 * 문제
 * 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
 * 
 * 출력
 * 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.
 */
package Bronze;

import java.io.*;
import java.util.StringTokenizer;

public class _2609 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      StringTokenizer xy = new StringTokenizer(br.readLine());
      int x = Integer.parseInt(xy.nextToken());
      int y = Integer.parseInt(xy.nextToken());

      // for(int i = Math.min(x,y); i > 0; i--) {
      //   if(x % i == 0 && y % i ==0) { System.out.println(i); break;}
      // }

      System.out.println(호제법(x, y));

      // int i = 0;
      // while(x * ++i % y != 0) {}
      // System.out.println(x * i);
      System.out.println(x * y / 호제법(x,y));

    } catch (Exception e) {}
  }

  static int 호제법(int x, int y) {
    if (y == 0)
        return x;
    return 호제법(y, x % y);
  }

}