/**
 * https://www.acmicpc.net/problem/27213
 */
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m = Integer.parseInt(sc.nextLine());
        int n = Integer.parseInt(sc.nextLine());

        int ans = (2 * m) + (2 * n) - 4;

        if (m == 1 || n == 1) {
            ans = (m + n) - 1;
        }

        System.out.println(ans);

        sc.close();
    }
}