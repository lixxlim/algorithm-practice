// https://school.programmers.co.kr/learn/courses/30/lessons/120871
package programmers;

import java.util.stream.IntStream;

public class _120871 {
    public static void main(String[] args) {
        // int[] target = IntStream.rangeClosed(1, 100).toArray();
        int[] target = {18, 19, 20, 30, 100};
        for(int i: target) {
            System.out.println(
                "i: " + i + ", return: " + solution(i)
            );
        }
    }

	public static int solution(int n) {
        return IntStream.range(1, n*3)
                        .filter(v -> v%3!=0)
                        .filter(v -> !String.valueOf(v).contains("3"))
                        .skip(n-1)
                        .findFirst()
                        .getAsInt();
	}
}