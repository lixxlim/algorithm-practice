import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = 0;
			while((n = Integer.parseInt(br.readLine())) != 0) {
				for(int i = 1; i <= n; i++) {
					System.out.println("*".repeat(i));
				}
			}
		}
	}
}
