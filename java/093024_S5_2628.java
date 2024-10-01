/**
 * https://www.acmicpc.net/problem/2628
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] paper = Arrays.stream(br.readLine().split(" "))
                                .mapToInt(Integer::parseInt)
                                .toArray();
            int n = Integer.parseInt(br.readLine());
            List<Integer> x = new ArrayList<>(){{add(0); add(paper[0]);}};
            List<Integer> y = new ArrayList<>(){{add(0); add(paper[1]);}};
            while(n-- > 0) {
                int[] cut = Arrays.stream(br.readLine().split(" "))
                                  .mapToInt(Integer::parseInt)
                                  .toArray();
                if(cut[0] == 1) {
                    x.add(cut[1]);
                } else {
                    y.add(cut[1]);
                }
            }
            x.sort((a,b) -> a - b);
            y.sort((a,b) -> a - b);
            int max = 0;
            for(int i = 0; i < x.size()-1; i++) {
                for(int j = 0; j < y.size()-1; j++) {
                    int area = (x.get(i+1) - x.get(i)) * (y.get(j+1) - y.get(j));
                    max = Math.max(max, area);
                }
            }
            System.out.println(max);
        }
    }
}