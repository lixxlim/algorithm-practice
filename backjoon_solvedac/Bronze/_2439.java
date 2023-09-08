/**
 * 문제
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 
 * 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
 * 
 * 입력
 * 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
 * 
 * 출력
 * 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class _2439 {

    public static void main(String[] args) {

        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {

            int repeat = Integer.parseInt(br.readLine());
            for(int i = 1; i <= repeat; i++) {
                System.out.println(_2439.printBlank(repeat-i)+_2439.printStar(i));
            }

        } catch (Exception e) {}

    }

    public static String printStar(int repeat) {
        
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= repeat; i++) {
            sb.append("*");
        }

        return sb.toString();
    }

    public static String printBlank(int repeat) {
        String str = "";
        for (int i = 1; i <= repeat; i++) {
            str += " ";
        }
        return str;
    }
}
