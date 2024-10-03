/**
 * https://www.acmicpc.net/problem/2740
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int[][] a = getInput(br);
            int[][] b = getInput(br);
            int[][] result = calc(a, b);
            Arrays.stream(result)
                  .map(v -> Arrays.stream(v)
                                  .mapToObj(String::valueOf)
                                  .collect(Collectors.joining(" ")))
                  .forEach(System.out::println);
        }
    }

    private static int[][] calc(int[][] arr1, int[][] arr2) {
        int[][] result = new int[arr1.length][arr2[0].length];
        for(int i = 0; i < arr1.length; i ++) {
            for(int j = 0; j < arr2[0].length; j ++) {
                for(int k = 0; k < arr1[0].length; k ++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        return result;
    }

    private static int[][] getInput(BufferedReader br) throws IOException {
        var n = Integer.parseInt(br.readLine().split(" ")[0]);
        int[][] arr = new int[n][];
        for(int i = 0; i < n; i ++) {
            arr[i] = Arrays.stream(br.readLine().split(" "))
                           .mapToInt(Integer::parseInt)
                           .toArray();
        }
        return arr;
    }
}
