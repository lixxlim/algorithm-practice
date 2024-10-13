/**
 * https://www.acmicpc.net/problem/3230
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // variable
            StringTokenizer st;
            int n;
            int m;
            int i;
            List<Integer> firstRating;
            List<Integer> finalRating;
            List<Integer> secondStage;

            // input
            st = new StringTokenizer(br.readLine());

            // preprocess
            n = Integer.parseInt(st.nextToken());
            m = Integer.parseInt(st.nextToken());
            firstRating = new ArrayList<>();
            finalRating = new ArrayList<>();
            
            // solution
            for(i = 1; i <= n; i++) {
                firstRating.add(Integer.parseInt(br.readLine())-1, i);
            }
            secondStage = new ArrayList<>(firstRating.subList(0, m));
            for(i = m - 1; i >= 0; i--) {
                finalRating.add(Integer.parseInt(br.readLine())-1, secondStage.get(i));
            }

            // output
            finalRating.stream().limit(3).forEach(System.out::println);
        }
    }
}
