// https://www.acmicpc.net/problem/11047
// 00:08:03
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class S4_11047 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] nk = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[] coins = new int[nk[0]];
            while(nk[0]-- > 0) {
                coins[nk[0]] = Integer.parseInt(br.readLine());
            }

            int result = 0;
            for(int i : coins) {
                result += nk[1] / i;
                nk[1] %= i; 
                if(nk[1] == 0) break;
            }
            System.out.println(result);
		}
	}
}