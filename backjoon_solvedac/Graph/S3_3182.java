package backjoon_solvedac.Graph;
// https://www.acmicpc.net/problem/3182
// 00:00:00
import java.io.*;
import java.util.*;

public class S3_3182 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            // input
			int n = Integer.parseInt(br.readLine());
            int[] graph = new int[n];
            for(int i = 0; i < n; i++) {
                graph[i] = Integer.parseInt(br.readLine());
            }

            // process
            int result = solution();

            // output
            System.out.println(result);
		}
	}

	public static void solution(String s) {
		System.out.println(s);
	}
}