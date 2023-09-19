// 
package backjoon_solvedac.Silver;

import java.io.*;
import java.util.*;

public class _1929 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] nm = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			solution(nm);
		}
	}

	public static void solution(int[] nm) {
        StringBuilder sb = new StringBuilder();
        int[] prm = new int[nm[1]+1];
        for (int i = 2; i <= nm[1]; i++) {
            prm[i] = i;
        }
        for(int i = 2; i <= Math.sqrt(nm[1]); i++) {
            if(prm[i] == 0) continue;
            for(int j = i*i; j <= nm[1]; j+=i) {
                prm[j] = 0;
            }
        }

        for(int i = nm[0]; i < nm[1]; i++) {
            if(prm[i] != 0) sb.append(i).append("\n");
        }
        System.out.println(sb);
	}
}