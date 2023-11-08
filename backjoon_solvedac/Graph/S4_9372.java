package backjoon_solvedac.Graph;
// https://www.acmicpc.net/problem/9372
// 00:00:00
import java.io.*;
import java.util.*;

public class S4_9372 {
    static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            //input
			int n = Integer.parseInt(br.readLine());
            while(n-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                sb.append(a-1).append("\n");
                for(int i = 0; i < b; i++) { br.readLine(); }
            }
            //output
            System.out.println(sb);
		}
	}
}