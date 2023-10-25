package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/28114
// 00:19:33
import java.io.*;
import java.util.*;

public class B3_28114 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] birthYear = new int[3];
            Map<Integer, Character> map = new TreeMap<>((v1, v2) -> {
                if(v1 < v2) return 1;
                return -1;
            });
            for(int i = 0; i < 3; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int point = Integer.parseInt(st.nextToken());
                birthYear[i] = Integer.parseInt(st.nextToken()) % 100;
                map.put(point, st.nextToken().charAt(0));
            }
            sort(birthYear, 0, birthYear.length-1);
            for(int i = 0; i < 3; i++) {
                System.out.print(birthYear[i]);
            }
            System.out.println("");
            map.forEach((k, v) -> System.out.print(v));
		}
	}

	public static void sort(int[] arr, int first, int last) {
        if(first >= last) return;
        int pivot = partition(arr, first, last);
        sort(arr, first, pivot-1);
        sort(arr, pivot+1, last);
	}

    private static int partition(int[] arr, int first, int last) {
    int pivot = first;
    while(first < last) {
        while(arr[last] > arr[pivot] && first < last) { last--; }
        while(arr[first] <= arr[pivot] && first < last) { first++; }
        if(first < last) { 
            swap(arr, first, last);
        } else {
            swap(arr, pivot, last);
        }
    }
    return last;
}

    private static void swap(int[] arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}