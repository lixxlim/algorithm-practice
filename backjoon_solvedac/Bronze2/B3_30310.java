package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/30310
// 00:00:00
import java.io.*;
import java.util.*;

public class B3_30310 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[] tem = new int[n];
            mergeSort(arr, tem, 0, n-1);
            System.out.println(arr[0]+arr[1]);
		}
	}

	public static void mergeSort(int[] arr, int[] tem, int st, int ed) {
        if(st >= ed) return;
        int mid = st + (ed -st) / 2;
        mergeSort(arr, tem, st, mid);
        mergeSort(arr, tem, mid+1, ed);

        for(int i = st; i <= ed; i++) { tem[i] = arr[i]; }
        int q = st, p = mid+1, idx = st;
        while(q <= mid && p <= ed) {
            if(tem[q] <= tem[p]) { arr[idx] = tem[q]; q++; }
            else { arr[idx] = tem[p]; p++; }
            idx++;
        }
        for(int i = 0; i <= mid - q; i++) { arr[idx+i] = tem[q+i]; }
	}
}