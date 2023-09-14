package programmers;

import java.util.*;

public class _12981 {
    public static void main(String[] args) {
        int[] a = new Solution().solution(3, new String[]{"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"});
        System.out.println(
            a[0] == 3 && a[1] == 3
        );
    }
}

class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = {0, 0};
        Set<String> used = new HashSet<>();

        for(int i = 0; i < words.length-1; i++) {
            if(!checking(used, words[i], words[i+1])) return new int[]{((i+1) % n)+1, ((i+1) / n)+1};
            used.add(words[i]);
        }
        return answer;
    }

    public static boolean checking(Set<String> words, String s1, String s2) {
        if(s2.charAt(0) != s1.charAt(s1.length()-1)) return false;
        if(words.contains(s2)) return false;
        return true;
    }
}