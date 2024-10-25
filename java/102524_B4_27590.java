/** 
 * https://www.acmicpc.net/problem/27590
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try (var br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st;
            
            st = new StringTokenizer(br.readLine());
            int ds = Integer.parseInt(st.nextToken());
            int ys = Integer.parseInt(st.nextToken());

            st = new StringTokenizer(br.readLine());
            int dm = Integer.parseInt(st.nextToken());
            int ym = Integer.parseInt(st.nextToken());

            int sunYear = ys - ds;
            int moonYear = ym - dm;

            while (sunYear != moonYear) {
                if (sunYear < moonYear) {
                    sunYear += ys;
                } else {
                    moonYear += ym;
                }
            }

            System.out.println(sunYear);
        }
    }
}