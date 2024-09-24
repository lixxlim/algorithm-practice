/**
 * https://www.acmicpc.net/problem/2097
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var n = Integer.parseInt(br.readLine());
            int ret = 0;
            double square = Math.floor(Math.sqrt(n));
            ret += square * 4;
            n -= square * square;
            ret += Math.ceil(n / square) * 2;
            System.out.println(ret);
        }
    }
}