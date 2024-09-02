/**
 * https://www.acmicpc.net/problem/1476
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] esm = Arrays.stream(br.readLine().split(" "))
							  .mapToInt(Integer::parseInt)
							  .toArray();
			int e = 1, s = 1, m = 1, year = 1;
			while( true ) {
				if(esm[0] == e && esm[1] == s && esm[2] == m) break;
				e++; s++; m++; year++;
				if(e == 16) e = 1;
				if(s == 29) s = 1;
				if(m == 20) m = 1;
			}
			System.out.println(year);
		}
	}
}
