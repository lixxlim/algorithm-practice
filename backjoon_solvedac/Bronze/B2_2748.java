package backjoon_solvedac.Bronze;
// https://www.acmicpc.net/problem/2748
// 00:00:00
import java.io.*;

public class B2_2748 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            Long[] numbers = new Long[n+1];
            numbers[0] = 0L; numbers[1] = 1L;

            for(int i = 2; i <= n; i++) {
                numbers[i] = numbers[i-2] + numbers[i-1];
            }

            System.out.println(numbers[n]);
		}
	}
}