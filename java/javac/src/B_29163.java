import java.io.*;
import java.util.Arrays;

class B_29163 {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int chk = Arrays.stream(br.readLine().split(" "))
                            .mapToInt(Integer::parseInt)
                            .map(v -> v & 1)
                            .sum();
            System.out.println(n-chk > chk ? "Happy" : "Sad");
        }
    }
}