/**
 * https://www.acmicpc.net/problem/3845
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // variables
            Boolean[][] map= new Boolean[75][100];
            String str;
            StringTokenizer st;
            StringTokenizer xi;
            StringTokenizer yi;
            int i, j;
            int nx, ny;
            double w, x, y, start, end;
            

            // input
            str = br.readLine();
            
            // solution
            while(!str.equals("0 0 0.0")) {
                
                // preprocess
                st = new StringTokenizer(str);
                nx = Integer.parseInt(st.nextToken());
                ny = Integer.parseInt(st.nextToken());
                w = Double.parseDouble(st.nextToken());
                xi = new StringTokenizer(br.readLine());
                yi = new StringTokenizer(br.readLine());
                
                // x
                while(xi.hasMoreTokens()) {
                    x = Integer.parseInt(xi.nextToken());
                    start = x - (x / 2) < 0 ? 0 : x - (x / 2);
                    end = x + (x / 2) + 1 > 75 ? 75 : x + (x / 2) + 1;
                    for(i = (int)start; i < end; i++) {
                        for(j = 0; j < ny; j++) {
                            map[i][j] = true;
                        }
                    }
                }

                // y
                while(yi.hasMoreTokens()) {
                    y = Integer.parseInt(yi.nextToken());
                    start = y - (y / 2) < 0 ? 0 : y - (y / 2);
                    end = y + (y / 2) + 1 > 100 ? 100 : y + (y / 2) + 1;
                    for(i = (int)start; i < end; i++) {
                        for(j = 0; j < ny; j++) {
                            map[j][i] = true;
                        }
                    }
                }

                // input next
                str = br.readLine();
            }

            // output
            System.out.println(
                Arrays.stream(map)
                    .flatMap(Arrays::stream)
                    .filter(v -> !v)
                    .findAny()
                    .orElse(true)
                    ? "NO" : "YES"
            );
        }
    }
}
