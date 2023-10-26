package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/25850
// 00:24:52
import java.io.*;
import java.util.*;

public class B3_25850 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            final String[] NAMES = {"A", "B", "C", "D", "E", "F"};
			int n = Integer.parseInt(br.readLine());
            List<Integer> cards = new ArrayList<>();
            Player[] players = new Player[n];
            for(int i = 0; i < n; i++) {
                Player p = new Player(NAMES[i]);
                int[] ns = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
                for(int j = 1; j <= ns[0]; j++) {
                    p.setCards(ns[j]);
                    cards.add(ns[j]);
                }
                players[i] = p;
            }
            Collections.sort(cards);
            for(int i : cards) {
                for(Player p : players) {
                    if(p.hasCard(i)) System.out.print(p.getName());
                }
            }

		}
	}
}

class Player {
    private String name;
    private Set<Integer> cards = new HashSet<>();

    public Player(String name) {
        this.name = name;
    }

    public String getName() { return this.name; }
    public void setCards(int e) { cards.add(e); }

    public boolean hasCard(int cardNo) {
        return cards.contains(cardNo);
    }
}