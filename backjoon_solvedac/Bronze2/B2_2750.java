package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/2750
// 00:31:00
import java.io.*;

public class B2_2750 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
			int n = Integer.parseInt(br.readLine());
            int[] ns = new int[n];
            while(--n >= 0) { ns[n] = Integer.parseInt(br.readLine()); }
            sort(ns);
            for(int i : ns) { bw.write(i+"\n"); }
            bw.flush();
		}
	}

	private static void sort(int[] ns) {
        for(int i = 0; i < ns.length-1; i++) {
            int min = i;
            for(int j = i+1; j < ns.length; j++) {
                if(ns[min] > ns[j]) min = j;
            }
            int tem = ns[i]; ns[i] = ns[min]; ns[min] = tem;
        }
    }
}