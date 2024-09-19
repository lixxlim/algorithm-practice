/**
 * https://www.acmicpc.net/problem/2018
 */
import java.io.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            var N = Integer.parseInt(br.readLine());
            int count = 0, start = 1, end = 1, sum = 1;
            while(start <= N) {
                if(sum == N) {
                    count++;
                    sum -= start;
                    start++;
                } else if(sum > N) {
                    sum -= start;
                    start++;
                } else {
                    end++;
                    sum += end;
                }
            }
            System.out.println(count);
        }
    }
}