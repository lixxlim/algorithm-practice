package backjoon_solvedac.Bronze;
// https://www.acmicpc.net/problem/2752
// 00:32:27
import java.io.*;
import java.util.*;

public class B4_2752 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] numbers = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < sort(numbers).length; i++) {
                sb.append(numbers[i]).append(" ");
            }
            System.out.println(sb);
		}
	}

	public static int[] sort(int[] numbers) {
        for(int i = 0; i < numbers.length-1; i++) {
            for(int j = 0; j < numbers.length-1-i; j++) {
                if(numbers[j] > numbers[j+1]) {
                    numbers[j] ^= numbers[j+1];
                    numbers[j+1] ^= numbers[j];
                    numbers[j] ^= numbers[j+1];
                }
            }
        }
        return numbers;
	}
}