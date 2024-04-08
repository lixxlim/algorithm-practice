//// https://www.acmicpc.net/problem/11365
import java.io.*;

public class B4_11365 {
    public static void main(String[] args) throws IOException {
        try (var br = new BufferedReader(new InputStreamReader(System.in))) {
            var res = new StringBuilder();
            while(true) {
                var inp = new StringBuilder(br.readLine());
                if ("END".equals(inp.toString())) break;
                res.append(inp.reverse()).append('\n');
            }
            System.out.println(res);
        }
    }
}
