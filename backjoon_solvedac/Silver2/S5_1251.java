package backjoon_solvedac.Silver2;
// https://www.acmicpc.net/problem/1251
// 00:36:31
import java.io.*;
import java.util.*;

public class S5_1251 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            String str = br.readLine();
            var list = new LinkedList<String>();
            for (int i = 2; i < str.length(); i++) {
                for (int j = 1; j < i; j++) {
                    StringBuilder strSb1 = new StringBuilder(str.substring(0, j));
                    StringBuilder strSb2 = new StringBuilder(str.substring(j, i));
                    StringBuilder strSb3 = new StringBuilder(str.substring(i));
                    String str1 = strSb1.reverse().toString();
                    String str2 = strSb2.reverse().toString();
                    String str3 = strSb3.reverse().toString();
                    list.add(str1 + str2 + str3);
                }
            }
            Collections.sort(list);
            System.out.println(list.pop());
		}
	}
}