package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/2587
// 00:20:59
import java.io.*;

public class B2_2587 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] numbers = new int[5];
            for(int i = 0; i < 5; i++) {
				numbers[i] = Integer.parseInt(br.readLine());
            }
			System.out.println(getAvg(numbers));
			System.out.println(getMiddle(numbers));
		}
	}
	
	public static int getAvg(int[] ns) {
		int sum = 0;
		for(int i = 0; i < ns.length; i++) {
			sum += ns[i];
		}
		return sum / ns.length;
	}

	private static int getMiddle(int[] ns) {
		sort(ns, new int[ns.length], 0, ns.length-1);
		return ns[ns.length/2];
	}

	private static void sort(int[] arr, int[] temp, int srt, int end) {
		if(srt >= end) return;

		int mid = srt + (end - srt) / 2;
		sort(arr, temp, srt, mid);
		sort(arr, temp, mid+1, end);

		int p1 = srt;
		int p2 = mid+1;
		int po = srt;
		for(int i = srt; i <= end; i++) { temp[i] = arr[i]; }
		while(p1 <= mid && p2 <= end) {
			if(temp[p1] <= temp[p2]) { arr[po] = temp[p1]; p1++; }
			else { arr[po] = temp[p2]; p2++; }
			po++;
		}
		for(int i = 0; i <= mid - p1; i++) { arr[po+i] = temp[p1+i]; }
	}

}