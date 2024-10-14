/**
 * https://www.acmicpc.net/problem/3711
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // variables
            int i;
            int n, g, m;
            int[] s;
            boolean unique;
            Set<Integer> set = new HashSet<>();
            StringJoiner sj = new StringJoiner("\n");

            // input
            n = Integer.parseInt(br.readLine());

            // solution
            while(n-- > 0) {
                g = Integer.parseInt(br.readLine());
                s = new int[g];
                for(i = 0; i < g; i++) {
                    s[i] = Integer.parseInt(br.readLine());
                }

                // for each cases
                m = g;
                while(true) {
                    unique = true;
                    set.clear();
                    for(i = 0; i < g; i++) {
                        if(!set.add(s[i] % m)) {
                            unique = false;
                            break;
                        };
                    }
                    if(unique) break;
                    m++;
                }
                sj.add(String.valueOf(m));
            }

            // output
            System.out.println(sj);
        }
    }
}
