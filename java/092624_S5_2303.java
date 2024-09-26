/**
 * https://www.acmicpc.net/problem/2303
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int[] players = new int[n];
            for(int i = 0; i < n; i++) {
                int[] cards = Arrays.stream(br.readLine().split(" "))
                                    .mapToInt(Integer::parseInt)
                                    .toArray();
                int maxPoint = getMaxPoint(cards);
                players[i] = maxPoint;
            }
            int winnerPoint = Arrays.stream(players).max().getAsInt();
            int winnerIndex = IntStream.range(0, players.length)
                                       .filter(i -> players[i] == winnerPoint)
                                       .reduce((a, b) -> b)
                                       .orElse(-1);
            System.out.println(winnerIndex + 1);
        }
    }

    private static int getMaxPoint(int[] cards) {
        int maxPoint = 0;
        for(int i = 0; i < cards.length; i++) {
            for(int j = i + 1; j < cards.length; j++) {
                for(int k = j + 1; k < cards.length; k++) {
                    maxPoint = Math.max(maxPoint, (cards[i] + cards[j] + cards[k]) % 10);
                }
            }
        }
        return maxPoint;
    }
}