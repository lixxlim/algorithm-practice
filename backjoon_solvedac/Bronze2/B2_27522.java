package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/27522
// 00:30:38
import java.io.*;
import java.util.*;

public class B2_27522 {
    static Map<Integer, Integer> pointMap = new HashMap<>(){{
        put(1, 10);
        put(2, 8);
        put(3, 6);
        put(4, 5);
        put(5, 4);
        put(6, 3);
        put(7, 2);
        put(8, 1);
    }};

	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            Rider[] riders = new Rider[8];
            for(int i = 0; i < 8; i++) {
                StringTokenizer s = new StringTokenizer(br.readLine());
                int time = Integer.parseInt(s.nextToken().replace(":", ""));
                String team = s.nextToken();
                riders[i] = new Rider(time, team);
            }
            Arrays.sort(riders);
            int point = 0;
            for(int i = 0; i < 8; i++) {
                if(riders[i].team.equals("R")) point += pointMap.get(i+1);
                if(riders[i].team.equals("B")) point -= pointMap.get(i+1);
            }
            System.out.println(point > 0 ? "Red" : "Blue");
		}
	}
}

class Rider implements Comparable<Rider> {
    int time;
    String team;

    Rider(int time, String team) {
        this.time = time;
        this.team = team;
    }

    @Override
    public int compareTo(Rider o) {
        return this.time - o.time;
    }
}