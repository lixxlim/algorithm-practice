/**
 * https://www.acmicpc.net/problem/27332
 */
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // 입력값을 정수로 읽어오기
        int a = Integer.parseInt(scanner.nextLine());
        int b = Integer.parseInt(scanner.nextLine());

        int days = a + 7 * b;

        // 조건에 따라 출력
        if (days >= 1 && days <= 30) {
            System.out.println("1");
        } else {
            System.out.println("0");
        }

        // Scanner 닫기
        scanner.close();
    }
}
