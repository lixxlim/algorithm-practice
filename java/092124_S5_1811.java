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
            String input;
            while(!(input = br.readLine()).equals(END_MARKER)) {
                char[] guess = input.split(" ")[0].toCharArray();
                char[] target = input.split(" ")[1].toCharArray();

                int black = 0;
                int gray = 0;
                int white = 0;

                for(int i = 0; i < guess.length; i++) {
                    if(target[i] == guess[i]) {
                        black++;
                        target[i] = guess[i] = EMPTY;
                    }
                }
                for(int i = 0; i < guess.length; i++) {
                    if(guess[i] == EMPTY) continue;
                    if(i !=0 && target[i-1] == guess[i] ) {
                        gray++;
                        target[i-1] = guess[i] = EMPTY;
                    }
                    else if(i != guess.length-1 && target[i+1] == guess[i]) {
                        gray++;
                        target[i+1] = guess[i] = EMPTY;
                    }
                }
                for(int i = 0; i < guess.length; i++) {
                    if(guess[i] == EMPTY) continue;
                    if(String.valueOf(target).contains(String.valueOf(guess[i]))){
                        white++;
                    }
                }
                bw.write(String.format("%s: %d black, %d grey, %d white\n", input.split(" ")[1], black, gray, white));
            }
            bw.flush();
        }
    }
}