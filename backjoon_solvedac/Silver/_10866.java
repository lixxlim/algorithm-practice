// https://www.acmicpc.net/problem/10866
package backjoon_solvedac.Silver;

import java.io.*;

public class _10866 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            MyDeque dec = new MyDeque(n);

            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < n; i++) {
                String[] s = br.readLine().split(" ");
                if(s[0].startsWith("push")) {
                    dec.getClass().getMethod(s[0], int.class).invoke(dec, Integer.parseInt(s[1]));
                } else {
                    sb.append(dec.getClass().getMethod(s[0]).invoke(dec))
                      .append("\n");
                }
            }
            System.out.println(sb);

		}
	}
}

class MyDeque {

    int[] arr;
    int front, back;

    MyDeque() {
        this(10000);
    }
    MyDeque(int size) {
        this.arr = new int[size];
        this.front = size >> 1;
        this.back = this.front + 1;
    }

    public void push_front(int x) {
        arr[front--] = x;
    }

    public void push_back(int x) {
        arr[back++] = x;
    }

    public int pop_front() {
        if(size() == 0) return -1;
        int i = arr[++front];
        arr[front] = 0;
        return i;
    }

    public int pop_back() {
        if(size() == 0) return -1;
        int i = arr[--back];
        arr[back] = 0;
        return i;
    }

    public int size() {
        return this.back - this.front - 1;
    }

    public int empty() {
        return size() == 0 ? 1 : 0;
    }

    public int front() {
        if(size() == 0) return -1;
        return arr[front+1];
    }

    public int back() {
        if(size() == 0) return -1;
        return arr[back-1];
    }
}