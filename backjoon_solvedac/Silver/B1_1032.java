// https://www.acmicpc.net/problem/1032
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;

public class B1_1032 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            String[] str = new String[n];
            while(n-- > 0) {
                str[n] = br.readLine();
            }

            char[] chr = str[0].toCharArray();
            for(int i = 0; i < str[0].length(); i++) {
                for(int j = 0; j < str.length; j++) {
                    if(str[j].charAt(i) != chr[i]) chr[i] = '?';
                }
            }

            System.out.println(chr);
		}
	}
}