/**
 * https://www.acmicpc.net/problem/3054
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // input
            String inp = br.readLine();

            // preprocess
            StringBuilder[] builders = {
                new StringBuilder("."),
                new StringBuilder("."),
                new StringBuilder("#"),
            };
            String[][] frames = {
                {".#..",".#..",".*.."},
                {"#.#.","#.#.","*.*."},
                {".$.#",".$.*",".$.*"}
            };

            // solution
            for(int n = 0; n < inp.length(); n++) {
                for(int i = 0; i < 3; i++) {
                    StringBuilder sb = new StringBuilder(frames[i][n % 3]);
                    if(i == 2) {
                        sb = sb.replace(1, 2, String.valueOf(inp.charAt(n)));
                        if(n == inp.length() - 1 && n % 3 == 1) {
                            sb = sb.replace(3, 4, "#");
                        }
                    }
                    builders[i].append(sb.toString());
                }
            }

            // output
            for(StringBuilder builder : builders) {
                System.out.println(builder);
            }
            System.out.println(builders[1]);
            System.out.println(builders[0]);
        }
    }
}
