/**
 * https://www.acmicpc.net/problem/2238
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int u = Integer.parseInt(st.nextToken());
            int n = Integer.parseInt(st.nextToken());
            
            int[] arr = new int[u+1];
            String[] names = new String[u+1];
            while(n-- > 0) {
                String inp = br.readLine();
                int num = Integer.parseInt(inp.split(" ")[1]);
                arr[num]++;
                if(names[num] == null) {
                    names[num] = inp;
                }
            }

            int minIndex = IntStream.range(0, arr.length)
                                    .filter(i -> arr[i] > 0)
                                    .reduce((i, j) -> arr[i] <= arr[j] ? i : j)
                                    .getAsInt();
            System.out.println(names[minIndex]);
        }
    }
}
