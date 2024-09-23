/**
 * https://www.acmicpc.net/problem/27182
 */
import java.io.*;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var st = new StringTokenizer(br.readLine());
            var n = Integer.parseInt(st.nextToken());
            var m = Integer.parseInt(st.nextToken());
            var ret = n > 7 ? n - 7 : m + 7;
            System.out.println(ret);
        }
    }
}

