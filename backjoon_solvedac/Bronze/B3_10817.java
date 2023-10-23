package backjoon_solvedac.Bronze;
// https://www.acmicpc.net/problem/10817
// 00:06:02
import java.io.*;
import java.util.*;

public class B3_10817 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            System.out.println(sort(ns)[1]);
		}
	}

	public static int[] sort(int[] ns) {
        for(int i = 0; i < ns.length-1; i++) {
            for(int j = 0; j < ns.length-1-i; j++) {
                if(ns[j] > ns[j+1]) {
                    ns[j] ^= ns[j+1];
                    ns[j+1] ^= ns[j];
                    ns[j] ^= ns[j+1];
                }
            }
        }
        return ns;
	}
}