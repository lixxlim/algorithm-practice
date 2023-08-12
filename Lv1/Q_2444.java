/**
 * 문제
 * 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
 * 
 * 입력
 * 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
 * 
 * 출력
 * 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
 */
package Lv1;

import java.io.*;

public class Q_2444 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));) {
            int n = Integer.parseInt(br.readLine());
            String r = "*".repeat(n + (n - 1)) + "\n";
            StringBuilder sb = new StringBuilder(r);
            for (int i = 1, j = 2; i < n; i++, j+=2) {
                r = " ".repeat(i) + "*".repeat((n + (n - 1)) - j) + "\n";
                sb.insert(0, r);
                sb.insert(sb.length(), r);
            }

            bw.write(sb.toString());
            bw.flush();
        } catch (Exception e) {}
    }
}
