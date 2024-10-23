/**
 * https://www.acmicpc.net/problem/27267
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int a = arr[0] * arr[1];
            int b = arr[2] * arr[3];

            if(a > b) {
                System.out.println("M");
            } else if(a < b) {
                System.out.println("P");
            } else {
                System.out.println("E");
            }
        }
    }
}
