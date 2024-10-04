/**
 * https://www.acmicpc.net/problem/2828
 */
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // Input
            String[] line = br.readLine().split(" ");
            int n = Integer.parseInt(line[0]);
            int m = Integer.parseInt(line[1]);
            int j = Integer.parseInt(br.readLine());
            int[] apples = new int[j];
            for(int i = 0; i < j; i ++) {
                apples[i] = Integer.parseInt(br.readLine());
            }

            // Solution
            int result = solution(n, m, apples);

            // Output
            System.out.println(result);
        }
    }

    private static int solution(int n, int m, int[] apples) {
        int ret = 0;
        int left = 0;
        int right = m - 1;
    
        for (int apple : apples) {
            int pos = apple - 1;
            if (pos < left) {
                ret += left - pos;
                left = pos;
                right = left + m - 1;
            } else if (pos > right) {
                ret += pos - right;
                right = pos;
                left = right - m + 1;
            }
        }
        return ret;
    }
}
