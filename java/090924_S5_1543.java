/**
 * https://www.acmicpc.net/problem/1543
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var document = br.readLine();
            var word = br.readLine();
            System.out.println(
                    (document.length() - document.replace(word,"").length()) / word.length()
            );
        }
    }
}