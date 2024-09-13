/**
 * https://www.acmicpc.net/problem/1789
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            long s = Long.parseLong(br.readLine());
            long n = 0;
            while(s > 0) {
                s -= ++n;
            }
            if(s < 0) n--;
            System.out.println(n);
        }
    }
}