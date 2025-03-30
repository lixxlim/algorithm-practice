/**
 * https://www.acmicpc.net/problem/4673
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
			int[] arr = new int[10001];
			for(int i = 1; i < 10000; i++) {
				int self = self(i);
				if (self <= 10000) {
					arr[self]++;
				}
			}
			for(int i = 1; i < 10001; i++) {
				if(arr[i] == 0) {
					bw.write("" + i);
					bw.newLine();
				}
			}
			bw.flush();
			bw.close();
		}
	}
	
	private static int self(int i) {
		int sum = i;
		while(i != 0) {
			sum += i % 10;
			i /= 10;
		}
		return sum;
	}
}

