/**
 * https://www.acmicpc.net/problem/1531
 */
import java.io.*;
import java.util.*;

class Main {
    
    public static int[][] grim = new int[100][100];
    
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            
            while( n-- > 0 ) {
                var paper = new StringTokenizer(br.readLine());
                int sX = Integer.parseInt(paper.nextToken());
                int sY = Integer.parseInt(paper.nextToken());
                int eX = Integer.parseInt(paper.nextToken());
                int eY = Integer.parseInt(paper.nextToken());
                for(int x = sX; x <= eX; x++) {
                    for(int y = sY; y <= eY; y++) {
                        grim[x-1][y-1]++;
                    }
                }
            }

            System.out.println(
                Arrays.stream(grim)
                    .flatMapToInt(Arrays::stream)
                    .filter(v -> v > m)
                    .count()
            );
        }
    }
}