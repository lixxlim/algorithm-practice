/**
 * https://www.acmicpc.net/problem/3211
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // input
            int n = Integer.parseInt(br.readLine());
            
            // preprocess
            ArrayList<Integer> a = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                a.add(Integer.parseInt(br.readLine()));
            }
            Collections.sort(a);
            
            // solution
            int ret = 1;
            while (ret <= n && a.get(ret - 1) + 1 > ret) {
                ret = a.get(ret - 1) + 1;
            }

            // output
            System.out.println(ret);
        }
    }
}
