package backjoon_solvedac.Bronze;
// https://www.acmicpc.net/problem/24416
// 00:08:01
import java.io.*;
import java.util.*;

public class B1_24416 {
    static int R = 1;
    static int D = 0;
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int[] dynamic = new int[n+1]; Arrays.fill(dynamic, -1);
            dynamic[0] = 0; dynamic[1] = dynamic[2] = 1;
            pivoR(n);
            pivoD(n, dynamic);
            System.out.println(R + " " + D);
		}
	}

	public static int pivoR(int n) {
        if(n == 1 || n == 2) return 1;
        R++;
        return pivoR(n-1) + pivoR(n-2);
	}
	public static int pivoD(int n, int[] dynamic) {
        for(int i = 3; i <= n; i ++) {
            D++;
            dynamic[i] = dynamic[n-1] + dynamic[n-2];
        }
        return dynamic[n];
	}
}