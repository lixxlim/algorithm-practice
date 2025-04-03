/**
 * https://www.acmicpc.net/problem/1855
 */
import java.io.*;
import java.util.*;

class Main {
	 public static void main(String[] args) throws IOException {
		Scanner scanner = new Scanner(System.in);
		int K = scanner.nextInt();
		String encryptedStr = scanner.next();
		scanner.close();
		
		System.out.println(decryption(K, encryptedStr));
	}
	
	private static String decryption(int K, String encryptedStr) {
		int len = encryptedStr.length();
		if (len == 0) {
			return "";
		}
		int rows = len / K;
		
		char[][] grid = new char[rows][K];
		int charIndex = 0;
		
		for (int r = 0; r < rows; r++) {
			if (r % 2 == 0) {
				for (int c = 0; c < K; c++) {
					if (charIndex < len) {
						grid[r][c] = encryptedStr.charAt(charIndex++);
					}
				}
			} else {
				for (int c = K - 1; c >= 0; c--) {
					if (charIndex < len) {
						grid[r][c] = encryptedStr.charAt(charIndex++);
					}
				}
			}
		}
		
		StringBuilder decrypted = new StringBuilder();
		for (int c = 0; c < K; c++) {
			for (int r = 0; r < rows; r++) {
				if (grid[r][c] != '\u0000') {
				   decrypted.append(grid[r][c]);
				}
			}
		}
		
		return decrypted.toString();
	}
	
}
