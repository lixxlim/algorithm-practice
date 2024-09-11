/**
 * https://www.acmicpc.net/problem/1769
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            String inp = br.readLine();

            int count = 0;
            while(inp.length() > 1) {
                int sum = inp.chars().map(c -> c - '0').sum();
                inp = String.valueOf(sum);
                count++;
            }
            String ans = Integer.parseInt(inp) % 3 == 0 ? "YES" : "NO";

            System.out.println(count);
            System.out.println(ans);
        }
    }
}