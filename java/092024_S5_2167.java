/**
 * https://www.acmicpc.net/problem/2167
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in));
            var bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
            var nm = Arrays.stream(br.readLine().split(" "))
                           .mapToInt(Integer::parseInt)
                           .toArray();
            int[][] arr = new int[nm[0]][];
            for(int i = 0; i < nm[0]; i++) {
                arr[i] = Arrays.stream(br.readLine().split(" "))
                               .mapToInt(Integer::parseInt)
                               .toArray();
            }
            var k = Integer.parseInt(br.readLine());
            while(k-- > 0) {
                var ijxy = Arrays.stream(br.readLine().split(" "))
                                 .mapToInt(Integer::parseInt)
                                 .toArray();
                long sum = 0;
                for(int i = ijxy[0]-1; i < ijxy[2]; i++) {
                    for(int j = ijxy[1]-1; j < ijxy[3]; j++) {
                        sum += arr[i][j];
                    }
                }
                bw.write(String.valueOf(sum));
                bw.write("\n");
            }
            bw.flush();
        }
    }
}