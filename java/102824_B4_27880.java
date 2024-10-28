/**
 * https://www.acmicpc.net/problem/27880
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int res = 0;
			
			for(int i = 0; i < 4; i++) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				String path = st.nextToken();
				int height = Integer.parseInt(st.nextToken());
				int multi = path.equals("Stair") ? 17 : 21;
				res += height * multi;
			}
			
			System.out.println(res);
		}
	}
}
