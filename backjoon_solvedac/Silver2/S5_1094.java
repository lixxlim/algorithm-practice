package backjoon_solvedac.Silver2;
// https://www.acmicpc.net/problem/1094
// 00:33:59
import java.io.*;
import java.util.*;

public class S5_1094 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            Stack<Integer> stack = new Stack<>();
            stack.push(64);
			int target = Integer.parseInt(br.readLine());
            if(target == 64) { System.out.println(1); return; }
            while(stack.stream().mapToInt(Integer::valueOf).sum() != target) {
                int harf = stack.pop() / 2;
                stack.push(harf);
                if(stack.stream().mapToInt(Integer::valueOf).sum() >= target) continue;
                stack.push(harf);
            }
            System.out.println(stack.stream().count());
		}
	}
}