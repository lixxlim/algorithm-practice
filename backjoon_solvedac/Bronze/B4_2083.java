// https://www.acmicpc.net/problem/2083
// 00:00:00
package backjoon_solvedac.Bronze;

import java.io.*;

public class B4_2083 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringBuilder sb = new StringBuilder();
            while (true) {
                String[] s = br.readLine().split(" ");
                if(s[0].equals("#")) break;
                sb.append(s[0]).append(" ");
                boolean isSenior = (Integer.parseInt(s[1]) > 17 || Integer.parseInt(s[2]) > 79);
                sb.append(isSenior ? "Senior" : "Junior").append("\n");
            }
            System.out.println(sb);
		}
	}
}