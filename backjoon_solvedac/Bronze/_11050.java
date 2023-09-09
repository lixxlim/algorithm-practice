/**
 * 문제
 * 자연수 
 * \(N\)과 정수 
 * \(K\)가 주어졌을 때 이항 계수 
 * \(\binom{N}{K}\)를 구하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 
 * \(N\)과 
 * \(K\)가 주어진다. (1 ≤ 
 * \(N\) ≤ 10, 0 ≤ 
 * \(K\) ≤ 
 * \(N\))
 * 
 * 출력
 *  
 * \(\binom{N}{K}\)를 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.io.*;
import java.util.*;

public class _11050 {
  public static void main(String[] args) throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int[] nk = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
      solution(nk[0], nk[1]);
    } 
  }

  public static void solution(int n, int k) {
    System.out.println(
      factorial(n) / factorial(k) / factorial(n-k)
    );
  }

  public static long factorial(int v) {
    long result = 1;
    for(int i = 1; i <= v; i++) {
      result *= i;
    }
    return result;
  }

}