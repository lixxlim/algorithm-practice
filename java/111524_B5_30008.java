/**
* https://www.acmicpc.net/problem/30008
*/
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			StringTokenizer NK = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(NK.nextToken());
			int K = Integer.parseInt(NK.nextToken());
			int[] Gs = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			
			String[] D = new String[K];
			for(int i = 0; i < K; i++) {
				int P = (Gs[i] * 100) / N;
				D[i] = getGrade(P);
			}
			
			System.out.println(String.join(" ", D));
		}
	}
	
	private static String getGrade(int P) {
		int ret = 1;
		if(P > 96) ret = 9;
		else if(P > 89) ret = 8;
		else if(P > 77) ret = 7;
		else if(P > 60) ret = 6;
		else if(P > 40) ret = 5;
		else if(P > 23) ret = 4;
		else if(P > 11) ret = 3;
		else if(P > 4) ret = 2;
		
		return String.valueOf(ret);
	}
}
