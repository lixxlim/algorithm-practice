/**
 * https://www.acmicpc.net/problem/3060
 * solved within 00:11:41.03
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            StringBuilder result = new StringBuilder();
            while(n-- > 0) {
                int stuff = Integer.parseInt(br.readLine());
                int[] pigs = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
                int eat = Arrays.stream(pigs).sum();
                int days = 1;
                while(eat <= stuff) {
                    days++;
                    int[] nextPigs = new int[pigs.length];
                    for(int i = 0; i < pigs.length; i++) {
                        nextPigs[i] = pigs[i] + pigs[(i+1)%6] + pigs[(i+3)%6] + pigs[(i+5)%6];
                    }
                    pigs = nextPigs;
                    eat = Arrays.stream(pigs).sum();
                }
                result.append(days).append("\n");
            }
            System.out.println(result);
        }
    }
}
