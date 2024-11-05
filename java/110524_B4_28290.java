/*
 * https://www.acmicpc.net/problem/28290
 */
import java.io.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			System.out.println(
				switch(br.readLine()) {
					case "fdsajkl;", "jkl;fdsa" -> "in-out";
					case "asdf;lkj", ";lkjasdf" -> "out-in";
					case "asdfjkl;" -> "stairs";
					case ";lkjfdsa" -> "reverse";
					default -> "molu";
				}
			);
		}
	}
}
