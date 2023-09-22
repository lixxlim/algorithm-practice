// https://school.programmers.co.kr/learn/courses/30/lessons/120846
package programmers;

import java.util.*;
import java.util.stream.*;

public class _120846 {
	public static void main(String[] args) throws Exception {
        int[] s = IntStream.rangeClosed(1, 100).toArray();
        for(int i : s) {
            System.out.println(i + "= " + solution1(i) + " : "+ solution2(i) + " : " +solution3(i));
        }
	}

    static public int solution1(int n) {
        if(n < 4) return 0;
        int[] primes = IntStream.rangeClosed(0, n).toArray();
        for(int i = 2; i < n; i++) {
            if(primes[i] == 0) continue;
            for(int j = i+i; j <= n; j = j+i) {
                primes[j] = 0;
            }
        }
        int count = 0;
        for(int i = 1; i <= n; i++) {
            if(primes[i] == 0) count++;
        }
        return count;
    }

    static public int solution2(int n) {
        if(n < 4) return 0;
        int[] primes = IntStream.rangeClosed(0, n).toArray();
        int[] compos = Arrays.copyOf(primes, primes.length);
        for(int i = 2; i < n; i++) {
            if(primes[i] == 0) continue;
            for(int j = i+i; j <= n; j = j+i) {
                primes[j] = 0;
            }
        }
        for(int i = 0; i <= n; i++) {
            if(primes[i] != 0) compos[i] = 0;
        }
        return (int)Arrays.stream(compos).filter(v -> v > 0).count();
    }

    static public int solution3(int n) {
        int answer = 0;
        for(int i = 1; i <= n; i++) {
            int count = 0;
            for(int j = 1; j <= i; j++) {
                count += (i % j == 0) ? 1 : 0;
            }
            answer += (count >= 3) ? 1 : 0;
        }
        return answer;
    }
}