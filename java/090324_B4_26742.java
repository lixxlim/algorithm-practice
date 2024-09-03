/**
 * https://www.acmicpc.net/problem/26742
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            String str = br.readLine();
            int B = str.length() - str.replace("B","").length();
            int C = str.length() - str.replace("C","").length();
            System.out.println(B / 2 + C / 2);
        }
    }
}