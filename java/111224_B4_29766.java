/**
 * https://www.acmicpc.net/problem/29766
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			String inp = br.readLine();
			String inpDeleted = inp.replaceAll("DKSH", "");
			int result = (inp.length() - inpDeleted.length()) / 4;
			System.out.println(result);
		}
	}
}
