package backjoon_solvedac.Silver;
// https://www.acmicpc.net/problem/5604
// 00:00:00
import java.io.*;
import java.util.*;
import java.util.stream.*;

public class S4_5604 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            solution(n);
		}
	}

	public static void solution(int n) {
        int[] arr = new int[n];
        int zero = n-1;
        arr[0] = n;
        print(arr);
        while(arr[0] > 1) {
            for(int i = n-1; i >= 0; i--) {
                if(arr[i] == 0) zero = i;
                if(arr[i] > 1) { 
                    arr[(i != n-1 && arr[i] - arr[i+1] > 1) ? i+1 : zero] += 1;
                    arr[i] -= 1; 
                    print(arr); 
                    break;
                }
            }
        }

	}

    public static void print(int[] arr) {
        System.out.println(
            Arrays.stream(arr)
                  .filter(e -> e > 0)
                  .mapToObj(String::valueOf)
                  .collect(Collectors.joining(" "))
        );
    }
}