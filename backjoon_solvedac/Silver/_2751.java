/**
 * 문제
 * N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
 * 
 * 출력
 * 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _2751 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out))) {

      int size = Integer.parseInt(br.readLine());
      int[] nums = new int[size];

      for (int i = 0; i < size; i++) nums[i] = Integer.parseInt(br.readLine());

      Arrays.stream(nums).sorted().forEach(v -> {
        try { bw.write(v + "\n"); } catch (Exception e) {};
      });

      bw.flush();

    } catch (Exception e) {}
  }

  public static int[] quickSort(int[] nums, int pivot) {
    return nums;
  }

  public static int[] mergeSort(int[] nums) {
    return nums;
  }

}