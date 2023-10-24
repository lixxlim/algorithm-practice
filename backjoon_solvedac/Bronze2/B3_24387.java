package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/24387
// 00:56:26
import java.io.*;
import java.util.*;

public class B3_24387 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			long[] price = Arrays.stream(br.readLine().split(" ")).mapToLong(Integer::parseInt).toArray();
			long[] pot = Arrays.stream(br.readLine().split(" ")).mapToLong(Integer::parseInt).toArray();
            quickSort(price, 0, price.length-1);
            quickSort(pot, 0, pot.length-1);
            long sum = 0;
            for(int i = 0; i < 3; i++) {
                sum += price[i] * pot[i];
            }
            System.out.println(sum);
		}
	}

    public static void quickSort(long[] arr, int left, int right) {
        if(left >= right) return;
        int pivot = partitioning(arr, left, right);
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }

    public static int partitioning(long[] arr, int left, int right) {
        long pivot = arr[left];
        while(left < right) {
            while(arr[right] > pivot && left < right){
                right--;
            }
            while(arr[left] <= pivot && left < right){
                left++;
            }
            swap(arr, left, right);
        }
        swap(arr, 0, left);
        return left;
    }

    public static void swap(long[] arr, int i, int j) {
        long temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}