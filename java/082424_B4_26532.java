/**
 * https://www.acmicpc.net/problem/26532
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] inp = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            System.out.println(inp[0] * inp[1] / 4840 / 5 + 1);
        }
    }
}