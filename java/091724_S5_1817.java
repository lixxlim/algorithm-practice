/**
 * https://www.acmicpc.net/problem/1817
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int[] nm = Arrays.stream(br.readLine().split(" "))
                             .mapToInt(Integer::parseInt)
                             .toArray();
            
            int ret = 0, box = 0;
            if(nm[0] > 0) {
                int[] books = Arrays.stream(br.readLine().split(" "))
                                    .mapToInt(Integer::parseInt)
                                    .toArray();
                for(int i = 0; i < nm[0]; i++) {
                    if(box + books[i] <= nm[1]) {
                        box += books[i];
                    } else {
                        box = books[i];
                        ret++;
                    }
                }
                if(box > 0) ret++;
            }

            System.out.println(ret);
        }
    }
}