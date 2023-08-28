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
package Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class _10818_2 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            br.readLine();
            String[] str = br.readLine().split(" ");
            List<Integer> list = Arrays.stream(str).mapToInt(Integer::parseInt).boxed().sorted().collect(Collectors.toList());

            System.out.println(list.get(0) + " " + list.get(list.size()-1));

        } catch (Exception e) {}
    }
}
