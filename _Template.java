// 
// 
import java.io.*;
import java.util.*;

public class _Template {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			String s = br.readLine();

			solution(s);
		}
	}

	public static void solution(String s) {
		System.out.println(s);
	}
}


class Tester {

	static HashSet<Integer> N = new HashSet<>();
	static HashSet<Integer> M = new HashSet<>();
	static {
		Random r = new Random();
		for(int i = 0; i < 10_0000; i++) { N.add(r.nextInt());}
		for(int i = 0; i < 10_0000; i++) { M.add(r.nextInt());}
	}

	public static void main(String[] args) throws IOException {
		long before = System.currentTimeMillis();
		_Template.solution(null);
		long after = System.currentTimeMillis();
		System.out.println(
			"N size: "+N.size() + " | M size: "+M.size() + "\n" +
			((after - before)/1000 + ".") +
			((after - before)%1000 + " s")
		);
	}
}