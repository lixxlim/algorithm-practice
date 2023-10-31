package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/9076
// 00:21:11
import java.io.*;
import java.util.*;

public class B2_9076 {
    static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            while(n-- > 0) {
                int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
                sort(arr);
                sb.append((arr[3] - arr[1] >= 4) ? "KIN" : (arr[1] + arr[2] + arr[3])).append("\n");
            }
            System.out.println(sb);
		}
	}

	public static void sort(int[] arr) {
        sort(arr, new int[arr.length], 0, arr.length-1);
	}

    private static void sort(int[] arr, int[] tem, int srt, int end) {
        if(srt >= end) return;
        int mid = srt + (end - srt) / 2;
        sort(arr, tem, srt, mid);
        sort(arr, tem, mid+1, end);

        int q = srt, p = mid+1, idx = srt;
        for(int i = srt; i <= end; i++) { tem[i] = arr[i]; }
        while(q <= mid && p <= end) {
            if(tem[q] <= tem[p]) { arr[idx++] = tem[q++]; }
            else { arr[idx++] = tem[p++]; }
        }
        for(int i = 0; i <= mid - q; i++) { arr[idx+i] = tem[q+i]; }
    }
}