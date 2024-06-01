/*
 * https://www.acmicpc.net/problem/17874
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			var nhv = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			System.out.println(Math.max(nhv[1], nhv[0]-nhv[1]) * Math.max(nhv[2], nhv[0]-nhv[2]) * 4);
		}
	}
}
