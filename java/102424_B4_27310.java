/**
 * https://www.acmicpc.net/problem/27310
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            String inp = br.readLine();
            int underbar = inp.length() - inp.replace("_", "").length();
            int colon = inp.length() - inp.replace(":", "").length();
            System.out.println(inp.length() + colon + underbar * 5);
        }
    }
}
