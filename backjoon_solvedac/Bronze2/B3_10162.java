package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/10162
// 00:07:07
import java.io.*;

public class B3_10162 {

    static final int A = 5 * 60;
    static final int B = 1 * 60;
    static final int C = 10;

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringBuilder sb = new StringBuilder();
			int n = Integer.parseInt(br.readLine());
            sb.append(n/A).append(" ").append(n%A/B).append(" ").append(n%A%B/C);
            System.out.println(
                (n%A%B%C == 0) ? sb : -1
            );
		}
	}
}