/**
 * 문제
 * 알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
 * 
 * 길이가 짧은 것부터
 * 길이가 같으면 사전 순으로
 * 단, 중복된 단어는 하나만 남기고 제거해야 한다.
 * 
 * 입력
 * 첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.
 * 
 * 출력
 * 조건에 따라 정렬하여 단어들을 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _1181 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int repeat = Integer.parseInt(br.readLine());
      String[] values = new String[repeat];
      for (int i = 0; i < repeat; i++) values[i] = br.readLine();
      solution3(values);
    } catch (Exception e) {}
  }

  //548ms
  public static void solution1(String[] values) {
    Set<String> set = new TreeSet<>((v1, v2) -> {
      if(v1.length() < v2.length()) return -1;
      if(v1.length() > v2.length()) return 1;
      return v1.compareTo(v2);
    });
    set.addAll(List.of(values));
    set.forEach(System.out::println);
  }

  //380ms(제일 빠름)
  public static void solution2(String[] values) throws IOException {
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    Set<String> set = new TreeSet<>((v1, v2) -> {
      if(v1.length() == v2.length()) return v1.compareTo(v2);
      return v1.length() - v2.length();
    });
    set.addAll(List.of(values));
    for(String s : set) { bw.write(s+"\n");}
    bw.flush();
    bw.close();
  }
  
  //384ms
  public static void solution3(String[] values) {
    StringBuilder sb = new StringBuilder();
    Set<String> set = new TreeSet<>((v1, v2) -> {
      if(v1.length() == v2.length()) return v1.compareTo(v2);
      return v1.length() - v2.length();
    });
    set.addAll(List.of(values));
    set.forEach(v -> sb.append(v).append("\n"));
    System.out.println(sb);
  }
}
