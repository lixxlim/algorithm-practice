// https://www.acmicpc.net/problem/1764
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S4_1764 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

			Set<String> unHearing = new HashSet<>();
            Set<String> nobodys = new TreeSet<>();
            StringBuilder sb = new StringBuilder();
            int[] nm = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

            while(nm[0]-- > 0) {
                unHearing.add(br.readLine());
            }
            while(nm[1]-- > 0) {
                String h = br.readLine();
                if(unHearing.contains(h)) nobodys.add(h);
            }

            sb.append(nobodys.size());
            for(String s : nobodys) {
                sb.append("\n").append(s);
            }
            System.out.println(sb);

		}
	}
}