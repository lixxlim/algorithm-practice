/**
 * https://www.acmicpc.net/problem/30319
 */
import java.io.*;
import java.time.LocalDate;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			LocalDate inpDate = LocalDate.parse(br.readLine());
			LocalDate targetDate = LocalDate.parse("2023-10-21").minusDays(34);
			System.out.println(
				inpDate.isBefore(targetDate) ? "GOOD" : "TOO LATE"
			);
		}
	}
}
