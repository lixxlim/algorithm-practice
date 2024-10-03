/**
 * https://www.acmicpc.net/problem/2822
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {

            Queue<Quize> pq = new PriorityQueue<>(new Comparator<Quize>() {
                @Override
                public int compare(Quize q1, Quize q2) {
                    return Integer.compare(q1.getPoint(), q2.getPoint());
                }
            });

            for(int i = 0; i < 8; i++) {
                int n = Integer.parseInt(br.readLine());
                Quize quize = new Quize(n, i+1);
                pq.add(quize);
                if (pq.size() > 5) {
                    pq.poll();
                }
            }

            List<Quize> topQuizes = new ArrayList<>(pq);
            long sum = topQuizes.stream()
                                .mapToInt(Quize::getPoint)
                                .sum();
            String indexs = topQuizes.stream()
                                     .sorted(Comparator.comparing(Quize::getQuizeNo))
                                     .map(Quize::getQuizeNo)
                                     .map(String::valueOf)
                                     .collect(Collectors.joining(" "));
            System.out.println(sum);
            System.out.println(indexs);
        }
    }
}

class Quize {
    private int point;
    private int quizeNo;

    Quize(int point, int quizeNo) {
        this.point = point;
        this.quizeNo = quizeNo;
    }

    public int getPoint() {
        return this.point;
    }

    public int getQuizeNo() {
        return this.quizeNo;
    }
}