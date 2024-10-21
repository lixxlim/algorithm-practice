/**
 * https://www.acmicpc.net/problem/27257
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            while( n % 10 == 0 ) n = n / 10;
            long count = String.valueOf(n).chars().filter(c -> c == '0').count();
            System.out.println(count);
        }
    }
}
