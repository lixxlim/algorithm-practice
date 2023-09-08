/**
 * 문제
 * N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
 * 
 * 출력
 * 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class _10818 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            br.readLine();
            String[] str = br.readLine().split(" ");
            int min = Arrays.stream(str).mapToInt(Integer::parseInt).min().getAsInt();
            int max = Arrays.stream(str).mapToInt(Integer::parseInt).max().getAsInt();

            System.out.println(min + " " + max);

        } catch (Exception e) {}
    }
}
