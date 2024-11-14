/**
 * https://www.acmicpc.net/problem/29807
 */
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			Integer.parseInt(br.readLine());
			StringTokenizer st = new StringTokenizer(br.readLine());
			int hangle = st.hasMoreTokens() ? Integer.parseInt(st.nextToken()) : 0;
			int math = st.hasMoreTokens() ? Integer.parseInt(st.nextToken()) : 0;
			int english = st.hasMoreTokens() ? Integer.parseInt(st.nextToken()) : 0;
			int tamgu = st.hasMoreTokens() ? Integer.parseInt(st.nextToken()) : 0;
			int daini = st.hasMoreTokens() ? Integer.parseInt(st.nextToken()) : 0;
			
			int gakuban = 0;
			gakuban += hangle > english ? (hangle - english) * 508 : (english - hangle) * 108;
			gakuban += math > tamgu ? (math - tamgu) * 212 : (tamgu - math) * 305;
			gakuban += daini > 0 ? daini * 707 : 0;
			gakuban *= 4763;
			
			System.out.println(gakuban);
		}
	}
}
