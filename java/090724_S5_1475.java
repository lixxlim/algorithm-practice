/**
 * https://www.acmicpc.net/problem/1475
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            String room = br.readLine();
            long[] count = new long[10];
            
            room.chars().forEach(c -> count[c - '0']++);
            count[6] = (count[6] + count[9] + 1) / 2;
            
            long set = 0;
            for (int i = 1; i < 9; i++) {
                set = Math.max(set, count[i]);
            }
            
            System.out.println(set);
        }
    }
}