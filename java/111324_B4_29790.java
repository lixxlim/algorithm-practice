/**
 * https://www.acmicpc.net/problem/29790
 */
import java.io.*;
import java.util.*;

class Main {
	
	private static final Map<Integer, String> map = new HashMap<>() {{
		put(0, "Bad");
		put(1, "Bad");
		put(2, "Good");
		put(3, "Very Good");
	}};
	
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(st.nextToken());
			int U = Integer.parseInt(st.nextToken());
			int L = Integer.parseInt(st.nextToken());
			Integer ret = 0;
			
			if(N >= 1000) ret += 2;
			if(U >= 8000 || L >= 260) ret += 1;
			
			System.out.println(map.get(ret));
		}
	}
}
