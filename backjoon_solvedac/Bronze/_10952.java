/**
 * 문제
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 입력은 여러 개의 테스트 케이스로 이루어져 있다.
 * 
 * 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
 * 
 * 입력의 마지막에는 0 두 개가 들어온다.
 * 
 * 출력
 * 각 테스트 케이스마다 A+B를 출력한다.
 * 
 */
package backjoon_solvedac.Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class _10952 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            while (true) {
                String[] in = br.readLine().split(" ");
                int v = Integer.parseInt(in[0]) + Integer.parseInt(in[1]);
                if (v == 0) break;
                System.out.println(v);
            }
        } catch (Exception e) {}
    }
}