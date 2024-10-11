/**
 * https://www.acmicpc.net/problem/3135
 * solved within 00:09:13.27
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var inp = br.readLine().split(" ");
            int asis = Integer.parseInt(inp[0]);
            int tobe = Integer.parseInt(inp[1]);
            int n = Integer.parseInt(br.readLine());
            int[] channels = new int[n];
            while(n-- > 0) {
                channels[n] = Integer.parseInt(br.readLine());
            }
            int min = Math.abs(asis - tobe);
            for(int channel : channels) {
                min = Math.min(min, Math.abs(channel - tobe) + 1);
            }
            System.out.println(min);
        }
    }
}
