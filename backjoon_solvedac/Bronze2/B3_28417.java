package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/28417
// 00:00:00
import java.io.*;
import java.util.*;

public class B3_28417 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            int top = 0;
            while(n-- > 0) {
                int[] run = new int[2];
                int[] trick = new int[5];
                StringTokenizer st = new StringTokenizer(br.readLine());
                for(int i = 0; i < 2; i++) run[i] = Integer.parseInt(st.nextToken());
                for(int i = 0; i < 5; i++) trick[i] = Integer.parseInt(st.nextToken());
                quickSort(run, 0, run.length-1);
                quickSort(trick, 0, trick.length-1);
                top = Math.max(run[0] + trick[0] + trick[1], top);
            }
            System.out.println(top);
		}
	}

	public static void quickSort(int[] arr, int q, int p) {
        if(q >= p) return;
        int left = q;
        int right = p;
        int pivot = left;
        while(left < right) {
            while(arr[right] < arr[pivot] && left < right) right--;
            while(arr[left] >= arr[pivot] && left < right) left++;
            if(left < right) swap(arr, left, right); else swap(arr, pivot, right);
        }
        quickSort(arr, q, right-1);
        quickSort(arr, right+1, p);
	}

    private static void swap(int[] arr, int q, int p) {
        if(q == p) return;
        arr[q] ^= arr[p]; arr[p] ^= arr[q]; arr[q] ^= arr[p];
    }
}