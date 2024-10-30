/**
 * https://www.acmicpc.net/problem/28224
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int price = 0;
			while(n-- > 0) {
				price += Integer.parseInt(br.readLine());
			}
			System.out.println(price);
		}
	}
} 
