/**
 * 문제
 * 정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
 * 
 * 명령은 총 여섯 가지이다.
 * 
 * push X: 정수 X를 큐에 넣는 연산이다.
 * pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 * size: 큐에 들어있는 정수의 개수를 출력한다.
 * empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
 * front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 * back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 * 입력
 * 첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
 * 
 * 출력
 * 출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _10845 {
  public static void main(String[] args) throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
      int loop = Integer.parseInt(br.readLine());
      MyQueue<Integer> q = new MyQueue<>();
      for(int i = 0; i < loop; i++) {
        String[] input = br.readLine().split(" ");
        switch (input[0]) {
          case "push" :
            q.push(Integer.parseInt(input[1]));
            break;
          case "pop" :
            bw.write(String.valueOf(q.pop().orElse(-1)));
            bw.write("\n");
            break;
          case "size" :
            bw.write(String.valueOf(q.size()));
            bw.write("\n");
            break;
          case "empty" :
            bw.write(String.valueOf(q.empty()));
            bw.write("\n");
            break;
          case "front" :
            bw.write(String.valueOf(q.front().orElse(-1)));
            bw.write("\n");
            break;
          case "back" :
            bw.write(String.valueOf(q.back().orElse(-1)));
            bw.write("\n");
            break;
        }
      }
      bw.flush();
    } catch (Exception e) { e.printStackTrace(); }
  }

  static class MyQueue<T> {
    List<T> box = new ArrayList<>();
    public void push(T x) {
      box.add(x);
    }
    public Optional<T> pop() {
      if(box.size() == 0) return Optional.empty();
      T val = box.get(0);
      box.remove(0);
      return Optional.of(val);
    }
    public int size() {
      return box.size();
    }
    public int empty() {
      if(box.size() == 0) return 1;
      return 0;
    }
    public Optional<T> front() {
      if(box.size() == 0) return Optional.empty();
      return Optional.of(box.get(0));
    }
    public Optional<T> back() {
      if(box.size() == 0) return Optional.empty();
      return Optional.of(box.get(box.size()-1));
    }
    public String toString() {
      return box.toString();
    }
  }
}