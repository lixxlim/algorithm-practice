/**
 * https://www.acmicpc.net/problem/1811
 */
import java.io.*;

class Main {

    private static final char EMPTY = ' ';
    private static final String END_MARKER = "#";

    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in));
            var bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
            while(true) {
                String[] inp = br.readLine().split(" ");
                if(inp[0].equals(END_MARKER)) break;

                char[] guess = inp[0].toCharArray();
                char[] target = inp[1].toCharArray();
                int b = 0, g = 0, w = 0, len = inp[0].length();

                for(int i = 0; i < len; i++) {
                    if(target[i] == guess[i]) {
                        b++;
                        target[i] = EMPTY;
                        guess[i] = EMPTY;
                    }
                }
                for(int i = 0; i < len; i++) {
                    if(guess[i] == EMPTY) continue;
                    if(i !=0 && target[i-1] == guess[i] ) {
                        g++;
                        target[i-1] = EMPTY;
                        guess[i] = EMPTY;
                    }
                    else if(i != len-1 && target[i+1] == guess[i]) {
                        g++;
                        target[i+1] = EMPTY;
                        guess[i] = EMPTY;
                    }
                }
                for(int i = 0; i < len; i++) {
                    if(guess[i] == EMPTY) continue;
                    if(String.valueOf(target).contains(String.valueOf(guess[i]))){
                        w++;
                    }
                }
                bw.write(String.format("%s: %d black, %d grey, %d white\n", inp[1], b, g, w));
            }
            bw.flush();
        }
    }
}