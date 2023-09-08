/**
 * 문제
 * 요세푸스 문제는 다음과 같다.
 * 
 * 1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제 순서대로 K번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.
 * 
 * N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 1,000)
 * 
 * 출력
 * 예제와 같이 요세푸스 순열을 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;
import java.util.stream.*;

public class _11866 {
  public static void main(String[] args) {
      try{
        int[] values = getInput();
        solution(values);
      } catch (Exception e) { e.printStackTrace(); }
  }

  public static int[] getInput() throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      StringTokenizer st = new StringTokenizer(br.readLine());
      int[] values = {Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken())};
      return values;
    } 
  }

  public static void solution(int[] values) {
    Queue<Integer> q = new LinkedList<>(
      IntStream.rangeClosed(1, values[0]).boxed().collect(Collectors.toList())
    );
    StringJoiner sj = new StringJoiner(", ","<",">");
    while(q.size() > 0) {
      for(int i = 1; i < values[1]; i++) q.offer(q.poll());
      sj.add(String.valueOf(q.poll()));
    }
    System.out.println(sj);
  }
}