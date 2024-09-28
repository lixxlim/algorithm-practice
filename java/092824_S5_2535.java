/**
 * https://www.acmicpc.net/problem/2535
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int[][] students = new int[n][3];
			for(int i = 0; i < n; i++) {
				students[i] = Arrays.stream(br.readLine().split(" "))
									.mapToInt(Integer::parseInt)
									.toArray();
			}
			Arrays.sort(students, (a, b) -> b[2] - a[2]);
			if(students[0][0] == students[1][0] && students[1][0] == students[2][0]) {
				for(int i = 3; i < n; i++) {
					if(students[2][0] != students[i][0]) {
						students[2] = students[i];
						break;
					}
				}
			}
			Arrays.stream(students)
				.limit(3)
				.map(s -> s[0] +" "+ s[1])
				.forEach(System.out::println);
		}
	}
}
