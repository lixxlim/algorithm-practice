/**
 * 문제
 * B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
 * 
 * 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
 * 
 * A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
 * 
 * 입력
 * 첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)
 * 
 * B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
 * 
 * 출력
 * 첫째 줄에 B진법 수 N을 10진법으로 출력한다.
 */
package Bronze;

import java.io.*;
import java.util.*;
import java.util.stream.*;
import java.util.function.Function;

public class _2745 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

            Map<String, Integer> map = new HashMap<>();
            map.putAll(Stream.iterate(0, v -> v+1)
                        .limit(10)
                        .collect(Collectors.toMap(String::valueOf, Function.identity())));
            map.putAll(IntStream.iterate(65, v -> v+1)
                        .limit(26)
                        .mapToObj(v -> (char)v)
                        .collect(Collectors.toMap(String::valueOf, v -> Integer.valueOf(v)-55)));

            StringTokenizer nb = new StringTokenizer(br.readLine());
            StringBuilder sb = new StringBuilder(nb.nextToken()).reverse();
            char[] n = sb.toString().toCharArray();
            int b = Integer.parseInt(nb.nextToken());

            int result = 0;
            for(int i = 0; i < n.length; i++) {
                result += (int)(map.get(String.valueOf(n[i])) * (Math.pow(b, i)));
            }
            System.out.println(result);

        } catch (Exception e) { e.printStackTrace(); }
    }
}
