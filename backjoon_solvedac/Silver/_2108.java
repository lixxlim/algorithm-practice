// https://www.acmicpc.net/problem/2108
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;
import java.util.stream.*;

public class _2108 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

			int n = Integer.parseInt(br.readLine());
            int[] numbers = new int[n];
            while(n-- > 0) { numbers[n] = Integer.parseInt(br.readLine()); }

            Arrays.sort(numbers);
            System.out.println(산술평균(numbers));
            System.out.println(중앙값(numbers));
            System.out.println(최빈값(numbers));
            System.out.println(범위(numbers));

		}
	}

    private static int 산술평균(int[] numbers) {
        return (int)Math.round(Arrays.stream(numbers).average().getAsDouble());
    }

    private static int 중앙값(int[] numbers) {
        return numbers[numbers.length >> 1];
    }

    private static int 최빈값(int[] numbers) {
        if(numbers.length == 1) return numbers[0];
        List<Map.Entry<Integer, Long>> li = new ArrayList<>(
            Arrays.stream(numbers)
                  .boxed()
                  .collect(Collectors.groupingBy(v -> v, Collectors.counting()))
                  .entrySet()
                  .stream()
                  .sorted(Map.Entry.<Integer, Long>comparingByValue().reversed()
                      .thenComparing(Map.Entry.comparingByKey()))
                  .collect(Collectors.toList()));
        return li.get(0).getValue() != li.get(1).getValue() ? li.get(0).getKey() : li.get(1).getKey();
    }

	private static int 범위(int[] numbers) {
        return numbers[numbers.length-1] - numbers[0];
    }

}