// https://www.acmicpc.net/problem/10773
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _10773 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            Stack<Integer> stack = new Stack<>();
            for(int i = 0; i < n; i++) {
                int k = Integer.parseInt(br.readLine());
                if(k == 0) { stack.pop(); continue; }
                stack.push(k);
            }
            System.out.println(
                stack.stream().mapToInt(Integer::valueOf).sum()
            );
		}
	}
}