package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/5576
// 00:11:27
import java.io.*;

public class B2_5576 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] W = new int[10];
            int[] K = new int[10];
            for(int i = 0; i < 10; i++) {
                W[i] = Integer.parseInt(br.readLine());
            }
            for(int i = 0; i < 10; i++) {
                K[i] = Integer.parseInt(br.readLine());
            }

            sort(W); sort(K);

            System.out.println(
                (W[0]+W[1]+W[2]) + " " + (K[0]+K[1]+K[2])
            );
		}
	}

    private static void sort(int[] w) {
        sort(w, new int[w.length], 0, w.length-1);
    }

    private static void sort(int[] arr, int[] tem, int srt, int end) {
        if(srt >= end) return;
        int mid = srt + (end - srt) / 2;
        sort(arr, tem, srt, mid);
        sort(arr, tem, mid+1, end);

        int q = srt, p = mid+1, idx = srt;
        for(int i = srt; i <= end; i++) { tem[i] = arr[i]; }

        while(q <= mid && p <= end) {
            if(tem[q] >= tem[p]) { arr[idx++] = tem[q++];}
            else { arr[idx++] = tem[p++];}
        }
        for(int i = 0; i <= mid - q; i++) { arr[idx+i] = tem[q+i]; }
    }

}