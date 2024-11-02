/**
 * https://www.acmicpc.net/problem/28281
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] nx = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int[] a = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int x = nx[1];
			int min = Integer.MAX_VALUE;
			for(int i = 1; i < nx[0]; i++) {
				int fir = i - 1;
				int sec = i;
				min = Math.min(min, x * a[fir] + x * a[sec]);
			}
			System.out.println(min);
		}
	}
}
