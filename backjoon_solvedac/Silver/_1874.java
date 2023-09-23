// 
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _1874 {
	public static void main(String[] args) throws Exception {
        System.out.println(solution());
	}

	public static String solution() throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

            Stack<Integer> stack = new Stack<>();
            StringBuilder result = new StringBuilder();
			int n = Integer.parseInt(br.readLine());
            int i = 1, e = 0;

            while(n-- > 0) {
                e = Integer.parseInt(br.readLine());
                if(e >= i) { while(e >= i) { stack.push(i++); result.append("+\n"); } }
                if(stack.pop() != e) return "NO";
                result.append("-\n");
            }
            return result.toString();

		}
	}
}