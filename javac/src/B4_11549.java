import java.io.*;
import java.util.*;

public class B4_11549 {
    public static void main(String[] args) throws IOException {
        try (var br = new BufferedReader(new InputStreamReader(System.in))) {
            int t = Integer.parseInt(br.readLine());
            long count = Arrays.stream(br.readLine().split(" ")).filter(v -> Integer.parseInt(v) == t).count();
            System.out.println(count);
        }
    }
}
