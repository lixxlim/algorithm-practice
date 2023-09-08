/**
 * > https://www.acmicpc.net/problem/11022
 * 
 * 문제
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
 * 
 * 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
 * 
 * 출력
 * 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.
 */
package backjoon_solvedac.Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class _11022 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {

            int repaet = Integer.parseInt(br.readLine());
            StringTokenizer st;
            int v1, v2;
            for (int i = 1; i <= repaet; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                v1 = Integer.parseInt(st.nextToken());
                v2 = Integer.parseInt(st.nextToken());
                System.out.printf("Case #%d: %d + %d = %d%n",i,v1,v2,v1+v2);
            }
        } catch (Exception e) { }
    }
}
