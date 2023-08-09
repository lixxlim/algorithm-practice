/**
 * 문제
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 입력은 여러 개의 테스트 케이스로 이루어져 있다.
 * 
 * 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
 * 
 * 출력
 * 각 테스트 케이스마다 A+B를 출력한다. 
 * 
 */
package Lv1;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Q_10951 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            String in;
            while ((in = br.readLine()) != null) {
                String[] ins = in.split(" ");
                int v = Integer.parseInt(ins[0]) + Integer.parseInt(ins[1]);
                System.out.println(v);
            }
        } catch (Exception e) {}
    }
}