package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/14471
// 00:00:00
import java.io.*;
import java.util.*;

public class B2_14471 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int[] money = new int[m];
            for (int i = 0; i < m; i++) {
                st = new StringTokenizer(br.readLine());
                int o = Integer.parseInt(st.nextToken());
                int x = Integer.parseInt(st.nextToken());
                money[i] = new Kuji(o, x).yen;
            }
            Arrays.sort(money);
            int sum = 0;
            for(int i : money) {
                sum += i;
            }
            System.out.println(sum - money[m-1]);
		}
	}
}

class Kuji {
    int o;
    int x;
    int yen;

    Kuji(int o, int x) {
        this.o = o;
        this.x = x;
        this.yen = needYen();
    }

    private boolean checkKuji() {
        return o >= x;
    }

    private int needYen() {
        if (checkKuji()) return 0;
        return (o + x) / 2 - o;
    }
}