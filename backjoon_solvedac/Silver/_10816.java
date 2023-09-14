// https://www.acmicpc.net/problem/10816
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;
import java.util.function.*;
import java.util.stream.*;

public class _10816 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

			br.readLine();
			HashMap<Integer, Long> map = new HashMap<>(
                Arrays.stream(br.readLine().split(" "))
                    .mapToInt(Integer::parseInt)
                    .boxed()
                    .collect(Collectors.groupingBy(Function.identity(), Collectors.counting()))
            );

            br.readLine();
            int[] m = Arrays.stream(br.readLine().split(" "))
                .mapToInt(Integer::parseInt)
                .toArray();
            
            StringBuilder sb = new StringBuilder();
            for(var i : m) {
                sb.append(map.getOrDefault(i, 0L)).append(" ");
            }
            System.out.println(sb);
		}
	}
}


// class Tester {

// 	static HashSet<Integer> N = new HashSet<>();
// 	static HashSet<Integer> M = new HashSet<>();
// 	static {
// 		Random r = new Random();
// 		for(int i = 0; i < 10_0000; i++) { N.add(r.nextInt());}
// 		for(int i = 0; i < 10_0000; i++) { M.add(r.nextInt());}
// 	}

// 	public static void main(String[] args) throws IOException {
// 		long before = System.currentTimeMillis();
// 		_10816.solution(null);
// 		long after = System.currentTimeMillis();
// 		System.out.println(
// 			"N size: "+N.size() + " | M size: "+M.size() + "\n" +
// 			((after - before)/1000 + ".") +
// 			((after - before)%1000 + " s")
// 		);
// 	}
// }