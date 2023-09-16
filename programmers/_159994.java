// https://school.programmers.co.kr/learn/courses/30/lessons/159994
package programmers;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class _159994 {
	public static void main(String[] args) throws Exception {
        String[] card1 = {"i", "drink", "water"};
        String[] card2 = {"want", "to"};
        String[] goal = {"i", "want", "to", "drink", "water"};

        System.out.println(solution(card1, card2, goal));;
	}

	public static String solution(String[] card1, String[] card2, String[] goal) {
        Queue<String> s1 = new LinkedList<>();s1.addAll(Arrays.asList(card1));
        Queue<String> s2 = new LinkedList<>();s2.addAll(Arrays.asList(card2));

        for(String s : goal) {
            if(!s.equals(s1.peek()) && !s.equals(s2.peek())) { return "No"; }
            if(s.equals(s2.peek())) { s2.poll(); continue; }
            if(s.equals(s1.peek())) { s1.poll(); continue; }
        }
        return "Yes";
	}
}