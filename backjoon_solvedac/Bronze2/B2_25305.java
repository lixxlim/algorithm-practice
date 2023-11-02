package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/25305
// 00:30:38
import java.io.*;
import java.util.*;

public class B2_25305 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] nk = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int[] x = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

            sort(x);
            System.out.println(x[nk[1]-1]);
		}
	}

    private static void sort(int[] arr) {
        sort(arr, 0, arr.length-1);
    }

    private static void sort(int[] arr, int srt, int end) {
        if(srt >= end) return;
        int pivot = partition(arr, srt, end);

        sort(arr, srt, pivot-1);
        sort(arr, pivot+1, end);
    }

    private static int partition(int[] arr, int srt, int end) {
        int pivot = srt;
        while(srt <= end) {
            while(srt <= end && arr[end] < arr[pivot]) { end--; }
            while(srt <= end && arr[srt] >= arr[pivot]) { srt++; }
            if(srt < end) swap(arr, srt, end);
        }
        swap(arr, pivot, end);
        return end;
    }

    private static void swap(int[] arr, int q, int p) {
        int temp = arr[q];
        arr[q] = arr[p];
        arr[p] = temp;
    }
}