/**
 * https://www.acmicpc.net/problem/26560
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			StringBuilder sb = new StringBuilder();
			while( n-- != 0 ) {
				String str = br.readLine();
				sb.append(str);
				if(str.charAt(str.length()-1) != '.') sb.append(".");
				sb.append("\n");
			}
			System.out.println(sb);
		}
	}
}
