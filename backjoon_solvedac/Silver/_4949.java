// https://www.acmicpc.net/problem/4949
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _4949 {
    public static void main(String[] args) {
        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            String in = "";
            StringBuilder sb = new StringBuilder();
            while(!((in = br.readLine()).equals("."))) {
                sb.append(solution(in)).append("\n");
            }
            System.out.println(sb);
        } catch (Exception e) { e.printStackTrace(); }
    }

    public static String solution(String in) {
        Stack<Character> stack = new Stack<>();
        stack.push('.');
        for(char c : in.toCharArray()) {
            switch (c) {
                case '[' :
                case '(' :
                    stack.push(c);
                    break;
                case ']' :
                    if(stack.pop() != '[') return "no";
                    break;
                case ')' :
                    if(stack.pop() != '(') return "no";
                    break;
            }
        }
        if(stack.pop() != '.') return "no";
        return "yes";
    }
}