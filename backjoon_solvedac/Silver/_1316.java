/**
 * 문제
 * 그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다i.
 * 
 * 단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.
 * 
 * 출력
 * 첫째 줄에 그룹 단어의 개수를 출력한다.
 */
package backjoon_solvedac.Silver;

import java.io.*;

public class _1316 {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            int repeat = Integer.parseInt(br.readLine());
            int result = 0;
            String line = "";

            for (int i = 0; i < repeat; i ++) {
                line = br.readLine();
                if (_1316.check(line)) result++;
            }

            System.out.println(result);
        } catch (Exception e) {}
    }

    public static boolean check(String str) throws Exception {
        int lastIndex = str.lastIndexOf(str.charAt(0))+1;
        String group = str.substring(0, lastIndex);
        System.out.println("group:"+group);
        for (int i = 1; i < group.length(); i++) {
            char c1 = group.charAt(0);
            char c2 = group.charAt(i);
            if(c1 != c2) return false;
        }
        if (str.length() != group.length()) {
            String nextGroup = str.substring(lastIndex,str.length());
            return _1316.check(nextGroup);
        }
        return true;
    }
}
