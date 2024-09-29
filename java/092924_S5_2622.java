/**
 * https://www.acmicpc.net/problem/2622
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader (System.in ))) {
            int n = Integer.parseInt(br.readLine());
            int count = 0;
            for(int i1 = 1; i1 <= n; i1++) {
                for(int i2 = i1; i2 <= n; i2++) {
                    int i3 = n - i1 - i2;
                    if(i3 < i2) break;
                    if(i1 + i2 > i3) count++;
                }
            }
            System.out.println(count);
        }
    }
}

