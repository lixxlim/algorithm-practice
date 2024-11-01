/**
 * https://www.acmicpc.net/problem/28249
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in));) {
			Map<String, Integer> m = new HashMap<>() {{
				put("Poblano", 1500);
				put("Mirasol", 6000);
				put("Serrano", 15500);
				put("Cayenne", 40000);
				put("Thai", 75000);
				put("Habanero", 125000);
			}};
			
			int n = Integer.parseInt(br.readLine());
			int total = 0;
			
			for (int i = 0; i < n; i++) {
				String pepper = br.readLine();
				total += m.get(pepper);
			}
			
			System.out.println(total);
		}
	}
}
