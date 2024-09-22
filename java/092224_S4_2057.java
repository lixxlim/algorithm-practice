/**
 * https://www.acmicpc.net/problem/2057
 */
import java.io.*;

class Main {

    private static long n = 0;
    private static long[] factorial = new long[21];

    public static void main(String[] args) throws IOException {
        getInput();
        makeFactorial();
        var answer = getAnswer();
        System.out.println(answer);
    }

    private static void getInput() throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            n = Long.parseLong(br.readLine());
        }
    }
    
    private static void makeFactorial() {
        factorial[0] = 1;
        for(int i = 1; i <= 20; i++) {
            factorial[i] = factorial[i - 1] * i;
        }
    }

    private static String getAnswer() {
        if(n == 0) {
            return "NO";
        }

        long temp = n;
        for(int i = 20; i >= 0; i--) {
            if(n >= factorial[i]) {
                n -= factorial[i];
            }
        }

        return n == 0 ? "YES" : "NO";
    }

}
