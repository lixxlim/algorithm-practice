//// https://www.acmicpc.net/problem/10156
import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] KNM = Arrays.stream(br.readLine().split(" "))
							  .mapToInt(Integer::parseInt)
							  .toArray();
			int result = KNM[0] * KNM[1] - KNM[2];
			System.out.println(result > 0 ? result : 0);
		};
	};
};
