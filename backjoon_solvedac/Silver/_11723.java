// https://www.acmicpc.net/problem/11723
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _11723 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            StringBuilder sb = new StringBuilder();
            boolean[] s = new boolean[21];
            while(n-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                String command = st.nextToken();
                int target = st.hasMoreTokens() ? Integer.parseInt(st.nextToken()) : 0;
                switch(command) {
                    case "add" :
                        s[target] = true;
                        break;
                    case "remove" :
                        s[target] = false;
                        break;
                    case "toggle" :
                        s[target] = !s[target];
                        break;
                    case "all" :
                        for(int i = 1; i <= 20; i++) { s[i] = true; }
                        break;
                    case "empty" :
                        for(int i = 1; i <= 20; i++) { s[i] = false; }
                        break;
                    case "check" :
                        int print = s[target] ? 1 : 0;
                        sb.append(print).append("\n");
                }
            }
            System.out.println(sb);
		}
	}
}