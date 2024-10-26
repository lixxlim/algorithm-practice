/**
 * https://www.acmicpc.net/problem/27855
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st1 = new StringTokenizer(br.readLine());
            int h1 = Integer.parseInt(st1.nextToken());
            int b1 = Integer.parseInt(st1.nextToken());
            StringTokenizer st2 = new StringTokenizer(br.readLine());
            int h2 = Integer.parseInt(st2.nextToken());
            int b2 = Integer.parseInt(st2.nextToken());

            int ply1 = h1 * 3 + b1;
            int ply2 = h2 * 3 + b2;

            if(ply1 > ply2) {
                System.out.printf("1 %d\n", ply1 - ply2);
            } else if (ply2 > ply1) {
                System.out.printf("2 %d\n", ply2 - ply1);
            } else {
                System.out.println("NO SCORE");
            }
        }
    }
}