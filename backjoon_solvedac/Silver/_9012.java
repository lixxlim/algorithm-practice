// https://www.acmicpc.net/problem/9012
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _9012 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < n; i++) {
                String s = br.readLine();
                sb.append(solution(s)).append("\n");
            }
            System.out.println(sb);
		}
	}

	public static String solution(String s) {
        Stack<Character> stack = new Stack<>();
        for(char c : s.toCharArray()) {
            switch(c) {
                case '(':
                    stack.push(c);
                    break;
                case ')':
                    if(stack.empty()) return "NO";
                    if(stack.pop() != '(') return "NO";
            }
        }
        if(!stack.empty()) return "NO";
        return "YES";
	}
}