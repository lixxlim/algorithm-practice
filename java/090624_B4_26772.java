/**
 * https://www.acmicpc.net/problem/26772
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            var sb = new StringBuilder();
            
            sb.append(" @@@   @@@  ".repeat(n)).append("\n");
            sb.append("@   @ @   @ ".repeat(n)).append("\n");
            sb.append("@    @    @ ".repeat(n)).append("\n");
            sb.append("@         @ ".repeat(n)).append("\n");
            sb.append(" @       @  ".repeat(n)).append("\n");
            sb.append("  @     @   ".repeat(n)).append("\n");
            sb.append("   @   @    ".repeat(n)).append("\n");
            sb.append("    @ @     ".repeat(n)).append("\n");
            sb.append("     @      ".repeat(n)).append("\n");
            
            System.out.println(sb);
        }
    }
}