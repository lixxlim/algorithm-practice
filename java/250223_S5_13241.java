/**
 * https://www.acmicpc.net/problem/13241
 */
import java.io.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) throws IOException {
		var scanner = new Scanner(System.in);
		long A = scanner.nextLong();
		long B = scanner.nextLong();
		System.out.println(lcm(A, B));
		scanner.close();
	}
	
	public static long lcm(long a, long b) {
		if(a == 0 || b == 0) {
			return 0;
		}
		return abs(a * b) / gcd(a, b);
	}
	
	public static long gcd(long a, long b) {
		while(b != 0) {
			long aa = a;
			a = b;
			b = aa % b;
		}
		return a;
	}
	
	public static long abs(long num) {
		return num >= 0 ? num : num * -1;
	}
}
