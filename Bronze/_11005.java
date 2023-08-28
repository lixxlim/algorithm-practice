/**
 * 문제
 * 10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.
 * 
 * 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
 * 
 * A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
 * 
 * 입력
 * 첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.
 * 
 * 출력
 * 첫째 줄에 10진법 수 N을 B진법으로 출력한다.
 */
package Bronze;

import java.io.*;
import java.util.*;

public class _11005 {
    public static void main(String[] args) {
        try(BufferedReader bw = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer nb = new StringTokenizer(bw.readLine());
            int n = Integer.parseInt(nb.nextToken());
            int b = Integer.parseInt(nb.nextToken());

            StringBuilder result = new StringBuilder();
            do {
                result.append(
                    (n % b) >= 10 ? String.valueOf((char)((n % b) + 55)) : (n % b)
                );
            } while ((n /= b) > 0);

            System.out.println(result.reverse());

        } catch (Exception e) { e.printStackTrace(); }
    }
}
