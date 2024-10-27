/**
 * https://www.acmicpc.net/problem/28074
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			String[] mobis = {"M", "O", "B", "I", "S"};
			String inp = br.readLine();
			boolean yes = true;
			int len = inp.length();
			for(String str : mobis) {
				if(len == inp.replace(str, "").length()) {
					yes = false;
					break;
				}
			}
			System.out.println(yes ? "YES" : "NO");
		}
	}
}
