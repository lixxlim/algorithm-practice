/**
 * 문제
 * 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
 * 
 * 출력
 * 주어진 수들 중 소수의 개수를 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.io.*;
import java.util.*;
import java.util.stream.*;

public class _1978 {
    public static void main(String[] args) {
        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            br.readLine();
			List<Integer> n = Arrays.stream(br.readLine().split(" "))
					.mapToInt(Integer::parseInt)
					.sorted()
					.boxed()
					.collect(Collectors.toList());
			solution1(n);
			solution2(n);
        } catch (Exception e) { e.printStackTrace(); }
    }

	//무식하지만 간단하게
	public static void solution1(List<Integer> n) {
		int size = n.size();
		for(int t : n) {
			if (t == 1) {
				size -= 1;
				continue;
			};
			for(int i = 2; i < t; i++) {
				if (t % i == 0) {
					size -=1;
					break;
				}
			}
		}
		System.out.println(size);
	}

	//어렵지만 좀 더 스마트하게 
	public static void solution2(List<Integer> n) {
		System.out.println(
			n.stream()
				.filter(v -> {
					if(v == 1) return false;
					for(int j = 2; j <= Math.sqrt(v); j++) {
						if(v % j == 0) return false;
					}
					return true;
				})
				.count()
		);
	}

}