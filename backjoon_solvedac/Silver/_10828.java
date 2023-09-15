// https://www.acmicpc.net/problem/10828
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _10828 {
	public static void main(String[] args) throws Exception {
        solutionWithReflection();
	}

    private static void solutionWithReflection() throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            MyStack stack = new MyStack();
                
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < n; i++) {
                String[] s = br.readLine().split(" ");

                if(s[0].equals("push")) {
                    MyStack.class.getDeclaredMethod(s[0], int.class).invoke(stack, Integer.parseInt(s[1]));
                }
                else {
                    sb.append(MyStack.class.getDeclaredMethod(s[0]).invoke(stack)).append("\n");
                }
            }
            System.out.println(sb);
        }
    }

	private static void solutionNormal() throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            MyStack stack = new MyStack();

            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < n; i++) {
                String[] s = br.readLine().split(" ");
                switch(s[0]) {
                    case "pop" :
                        sb.append(stack.pop()).append("\n");
                        break;
                    case "empty" :
                        sb.append(stack.empty()).append("\n");
                        break;
                    case "size" :
                        sb.append(stack.size()).append("\n");
                        break;
                    case "top" :
                        sb.append(stack.top()).append("\n");
                        break;
                    case "push" :
                        stack.push(Integer.parseInt(s[1]));
                }
            }
            System.out.println(sb);
		}
	}
}

class MyStack {
    private int[] arr = new int[10000];
    private int pivot = 0;

    private void resize() {
        arr = Arrays.copyOf(arr, arr.length << 1);
    }

    void push(int x) {
        if(pivot == arr.length-1) resize();
        arr[pivot++] = x;
    }

    int pop() {
        if(pivot == 0) return -1;
        int i = arr[--pivot];
        arr[pivot] = 0;
        return i;
    }

    int size() {
        return pivot;
    }

    int empty() {
        if(pivot == 0) return 1;
        return 0;
    }

    int top() {
        if(pivot == 0) return -1;
        return arr[pivot-1];
    }
}