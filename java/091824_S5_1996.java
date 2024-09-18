/**
 * https://www.acmicpc.net/problem/1996
 */
import java.io.*;

class Main {

    private static char[][] map;
    private static int n;

    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in));
            var bw = new BufferedWriter(new OutputStreamWriter(System.out));) {

            n = Integer.parseInt(br.readLine());
            map = new char[n][n];

            for (int i = 0; i < n; i++) {
                map[i] = br.readLine().toCharArray();
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    bw.write(checkMine(i, j));
                }
                bw.newLine();
            }
            bw.flush();
        }
    }

    private static char checkMine(int x, int y) {
        if(map[x][y] != '.') return '*';

        int count = 0;
        for(int i = x - 1; i <= x + 1; i++) {
            for(int j = y - 1; j <= y + 1; j++) {
                if(isValid(i, j) && Character.isDigit(map[i][j])) {
                    count += map[i][j] - '0';
                }
            }
        }
        return count > 9 ? 'M' : (char)(count + '0');
    }

    private static boolean isValid(int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < n;
    }
}
