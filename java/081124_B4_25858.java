/**
 * https://www.acmicpc.net/problem/25858
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] nd = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int[] ns = new int[nd[0]];
			StringBuilder sb = new StringBuilder();
			
			int solves = 0;
			for(int i = 0; i < nd[0]; i++) {
				ns[i] = Integer.parseInt(br.readLine());
				solves += ns[i];
			}

			int point = nd[1] / solves;
			for(int i = 0; i < nd[0]; i++) {
				sb.append(ns[i] * point);
				if(i < nd[0]-1) sb.append("\n");
			}
			System.out.println(sb);
		}
	}
}
