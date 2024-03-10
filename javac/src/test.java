//// https://www.acmicpc.net/problem/28235
import java.io.*;
import java.util.*;

public class test {
    public static void main(String[] args) throws IOException {
        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            var map = new HashMap<String, String>() {{
                put("SONGDO", "HIGHSCHOOL");
                put("CODE", "MASTER");
                put("2023", "0611");
                put("ALGORITHM", "CONTEST");
            }};
            var say = br.readLine();
            System.out.println(map.get(say));
        }
    }
}
