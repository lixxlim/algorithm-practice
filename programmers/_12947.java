// https://school.programmers.co.kr/learn/courses/30/lessons/12947
package programmers;

import java.io.*;

public class _12947 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int x = Integer.parseInt(br.readLine());
			System.out.println(solution(x));
		}
	}

	public static boolean solution(int x) {
		int sum = String.valueOf(x).chars().map(v -> v-'0').sum();
		return x % sum == 0;
	}
}