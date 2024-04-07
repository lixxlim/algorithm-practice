// https://www.acmicpc.net/problem/10808
import java.io.*;
import java.util.*;
import java.util.stream.*;

public class B4_10808 {
    public static void main(String[] args) throws IOException {
        try (var br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] alpa = new int[26];

            String s = br.readLine();
            s.chars().forEach(c -> alpa[c-'a']++);

            System.out.println(
                String.join(" ", Arrays.stream(alpa).mapToObj(String::valueOf).collect(Collectors.toList()))
            );
        }
    }
}
