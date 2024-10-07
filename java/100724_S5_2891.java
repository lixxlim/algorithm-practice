/**
 * https://www.acmicpc.net/problem/2891
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // Input
            int[] inp = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[] s = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[] r = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

            // Preprocess
            Arrays.sort(s);
            Arrays.sort(r);
            boolean[] teams = new boolean[inp[0]+2];
            for(int i : r) {
                teams[i] = true;
            }

            // Solution
            int ret = s.length;
            List<Integer> list = new ArrayList<>(Arrays.stream(s).boxed().collect(Collectors.toList()));
            for(int i : s) {
                if(teams[i]) {
                    teams[i] = false;
                    list.remove(Integer.valueOf(i));
                    ret--;
                } 
            }
            for(int i : list) {
                if(teams[i-1]) {
                    teams[i-1] = false;
                    ret--;
                } else if(teams[i+1]) {
                    teams[i+1] = false;
                    ret--;
                }
            }

            // Output
            System.out.println(ret);

        }
    }
}
