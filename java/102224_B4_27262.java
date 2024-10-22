/**
 * https://www.acmicpc.net/problem/27262
 */
import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int homeFloor = Integer.parseInt(st.nextToken());
            int elevatorLocation = Integer.parseInt(st.nextToken());
            int walkTime = Integer.parseInt(st.nextToken());
            int elevatorTime = Integer.parseInt(st.nextToken());

            int walkTimeSum = (homeFloor - 1) * walkTime;
            int elevatorTimeSum = (elevatorLocation + homeFloor - 2) * elevatorTime;

            System.out.println(elevatorTimeSum + " " + walkTimeSum);
        }
    }
}
