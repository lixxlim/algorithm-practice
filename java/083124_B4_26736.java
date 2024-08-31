/**
 * https://www.acmicpc.net/problem/26736
 */
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        try (var br = new BufferedReader(new InputStreamReader(System.in))) {
            String line = br.readLine();
            long countA = line.chars().filter(ch -> ch == 'A').count();
            long countB = line.chars().filter(ch -> ch == 'B').count();
            System.out.println(countA + " : " + countB);
        }
    }
}
