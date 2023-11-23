package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/6840
// 00:00:00
import java.util.*;

public class B5_6840 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] family = new int[3];
        for (int i = 0; i < 3; i++) {
            family[i] = sc.nextInt();
        }
        Arrays.sort(family);
        System.out.println(family[1]);
        sc.close();
    }
}