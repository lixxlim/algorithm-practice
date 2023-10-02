// https://www.acmicpc.net/problem/1032
// 00:00:00
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class B1_1032 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            String[] str = new String[n];
            while(n-- > 0) {
                str[n] = br.readLine();
            }
            for(int i = 0; i < str[0].length(); i++) {
                for(int j = 0; j < str.length; j++) {
                    str[j].charAt(i)

                }
            }
		}
	}

	public static void solution(String s) {
		System.out.println(s);
	}
}