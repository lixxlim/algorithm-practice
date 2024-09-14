/**
 * https://www.acmicpc.net/problem/1813
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			Integer[] numbers = Arrays.stream(br.readLine().split(" "))
									  .mapToInt(Integer::parseInt)
									  .boxed()
									  .toArray(Integer[]::new);
			Arrays.sort(numbers, (a, b) -> b - a);
			
			long ret = 0;
			for(int i = 0; i < n; i++) {
				int target = numbers[i];
				long count = Arrays.stream(numbers)
								   .filter(v -> v == target)
								   .count();
				if(count == numbers[i]) {
					ret = count;
					break;
				}
				if(numbers[i] == 0) {
					ret = -1;
				}
			}
			
			System.out.println(ret);
		}
	}
}
