package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/4999
// 00:00:00
import java.io.*;

public class B5_4999 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			String a = br.readLine();
			String b = br.readLine();
			System.out.println(a.length() >= b.length() ? "go":"no");
		}
	}
}