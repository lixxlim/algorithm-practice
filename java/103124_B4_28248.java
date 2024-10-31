/**
 * https://www.acmicpc.net/problem/28248
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var p = Integer.parseInt(br.readLine());
            var c = Integer.parseInt(br.readLine());

            var score = 50 * p - 10 * c;
            if (p > c) score += 500;

            System.out.println(score);
        }
    }
}
