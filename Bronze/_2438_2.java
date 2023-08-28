package Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.stream.Stream;

public class _2438_2 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {

            int repeat = Integer.parseInt(br.readLine());
            Stream.iterate(1, v -> v+1).limit(repeat).map(v -> "*".repeat(v)).forEach(System.out::println);

        } catch (Exception e) {}
    }
}
