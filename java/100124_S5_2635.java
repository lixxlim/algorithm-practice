/**
 * https://www.acmicpc.net/problem/2635
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int max = 0;
            List<Integer> result = new ArrayList<>();
            for(int i = 1; i <= n; i ++) {
                List<Integer> list = new ArrayList<>();
                list.add(n);
                list.add(i);
                int next = n - i;
                while(next >= 0) {
                    list.add(next);
                    next = list.get(list.size() - 2) - list.get(list.size() - 1);
                }
                if(max < list.size()) {
                    max = list.size();
                    result = list;
                }
            }
            System.out.println(max);
            System.out.println(result.stream().map(String::valueOf).collect(Collectors.joining(" ")));
        }
    }
}
