// https://www.acmicpc.net/problem/28278
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _28278 {

    static Map<String, String> map = new HashMap<>() {{
        put("1", "push");
        put("2", "pop");
        put("3", "size");
        put("4", "empty");
        put("5", "peek");
    }};

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            Stack<String> stack = new Stack<>();

            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < n; i++) {
                String[] s = br.readLine().split(" ");
                if(s.length == 2) stack.push(s[1]);
                else {
                    try {
                        sb.append(Stack.class.getMethod(map.get(s[0])).invoke(stack)).append("\n");
                    } catch (Exception e) {sb.append("-1").append("\n"); }
                }
            }
            System.out.println(sb.toString().replace("true","1").replace("false", "0"));
		}
	}
}