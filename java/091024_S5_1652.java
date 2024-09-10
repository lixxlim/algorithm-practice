/**
 * https://www.acmicpc.net/problem/1652
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            String[] room = new String[n];
            for(int i = 0; i < n; i++) {
                room[i] = br.readLine();
            }

            int rows = 0, cols = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 1; j < n; j++) {
                    String t1 = String.valueOf(room[i].charAt(j-1));
                    String t2 = String.valueOf(room[i].charAt(j-0));
                    if(!t1.equals(".")) continue;
                    if(t1.equals(t2)) {
                        rows++;
                    }
                }
            }
            for(int i = 0; i < n; i++) {
                for(int j = 1; j < n; j++) {
                    String t1 = String.valueOf(room[j-1].charAt(i));
                    String t2 = String.valueOf(room[j-0].charAt(i));
                    if(!t1.equals(".")) continue;
                    if(t1.equals(t2)) {
                        cols++;
                        break;
                    }
                }
            }
            System.out.printf("%d %d\n", rows, cols);
        }
    }
}