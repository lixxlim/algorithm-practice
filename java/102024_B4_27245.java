/**
 * https://www.acmicpc.net/problem/27245
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int w = Integer.parseInt(br.readLine());
            int l = Integer.parseInt(br.readLine());
            int h = Integer.parseInt(br.readLine());
            int srt = Math.min(w, l);
            int lng = Math.max(w, l);
            System.out.println(
                srt / h >= 2 && lng / srt <= 2 ? "good" : "bad"
            );
        }
    }
}