/**
 * https://www.acmicpc.net/problem/26768
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    
    private static final Map<Character, String> map = Map.of(
        'a', "4",
        'e', "3",
        'i', "1",
        'o', "0",
        's', "5"
    );
    
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            System.out.println(
                br.readLine().chars()
                    .mapToObj(v -> (char)v)
                    .map(v -> map.getOrDefault(v, String.valueOf(v)))
                    .collect(Collectors.joining())
            );
        }
    }
}