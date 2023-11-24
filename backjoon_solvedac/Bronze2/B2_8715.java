package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/8715
// 00:17:05
import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class B2_8715 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            Arrays.sort(ns);
            Set<Integer> set = Arrays.stream(ns).boxed().collect(Collectors.toSet());
            System.out.println((ns[n-1] - ns[0]) < n && set.size() == n ? "TAK" : "NIE");
		}
	}
}