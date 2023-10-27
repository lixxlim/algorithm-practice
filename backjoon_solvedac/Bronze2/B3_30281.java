package backjoon_solvedac.Bronze2;
// https://solved.ac/problems/tags/sorting/unsolved?sort=level&direction=asc&page=1
// 00:00:00
import java.io.*;
import java.util.*;

public class B3_30281 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			Scanner sc = new Scanner(System.in);
			int n = sc.nextInt();
			int[] ns = new int[n];
			for(int i = 0; i < n; i++) {
				ns[i] = sc.nextInt();
			}
			mergeSort(ns);
			int candys = Arrays.stream(ns).sum();
			for(int i = 0; i < n; i++) {
				if(candys % 2 == 0) break;
				if(ns[i] %2 != 0) candys -= ns[i];
			}
			System.out.println(candys/2);
			sc.close();
		}
	}

	public static void mergeSort(int[] arr) {
		int[] tempArr = new int[arr.length];
        mergeSort(arr, tempArr, 0, arr.length-1);
	}

	public static void mergeSort(int[] arr, int[] tempArr, int st, int ed) {
        if(st >= ed) return;
        int mid = st + (ed - st) / 2;
        mergeSort(arr, tempArr, st, mid);
        mergeSort(arr, tempArr, mid+1, ed);
		merge(arr, tempArr, st, mid, ed);
	}

	private static void merge(int[] arr, int[] tempArr, int st, int mid, int ed) {
		for(int i = st; i <= ed; i++) {
			tempArr[i] = arr[i];
		}

		int part1 = st;
		int part2 = mid+1;
		int index = st;
		
		while(part1 <= mid && part2 <= ed) {
			if(tempArr[part1] <= tempArr[part2]) {
				arr[index] = tempArr[part1];
				part1++;
			} else {
				arr[index] = tempArr[part2];
				part2++;
			}
			index++;
		}

		for(int i = 0; i <= mid - part1; i++) {
			arr[index + i] = tempArr[part1 + i];
		}

	}
}