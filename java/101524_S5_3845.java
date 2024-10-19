/**
 * https://www.acmicpc.net/problem/3845
 */
import java.io.*;
import java.util.*;

class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		String s = "";
		
		int nx, ny;
		double w, now;
		boolean check;
		List<Double> arr;
		StringTokenizer st;
		
		// "0 0 0.0"이 들어오면 반복문을 종료한다.
		while (!(s = br.readLine()).equals("0 0 0.0")) {
			st = new StringTokenizer(s);
			nx = Integer.parseInt(st.nextToken()); // 가로를 평행하게 깍은 횟수
			ny = Integer.parseInt(st.nextToken()); // 세로를 평행하게 깍은 횟수
			w = Double.parseDouble(st.nextToken()); // 폭
			
			check = true;
			arr = new LinkedList<>();
			
			// x좌표 먼저 확인.
			st = new StringTokenizer(br.readLine());
			for (int i = 0; i < nx; i++) {
				arr.add(Double.parseDouble(st.nextToken()));
			}
			
			// 앞에서 부터 잔디 정리를 위해 정렬
			Collections.sort(arr);
			
			// 현재 까지 잔디 정렬을 한 위치
			now = 0;
			for (int i = 0; i < nx; i++) {
				// 현재 까지 잔디 정리를 한 위치에서 연속적으로 연결이 된다면
				if (arr.get(i) - (w / 2) <= now) {
					now = arr.get(i) + (w / 2);
				} else { // 중간에 빈 공간이 있다면
					check = false;
					break;
				}
			}
			
			// 모든 면적을 하지 못했거나, 중간에 빈 공간이 있다면
			if (!check || now < 75) {
				br.readLine();
				sb.append("NO\n");
				continue;
			}
			
			arr = new LinkedList<>();
			
			// y좌표 계산
			st = new StringTokenizer(br.readLine());
			for (int i = 0; i < ny; i++) {
				arr.add(Double.parseDouble(st.nextToken()));
			}
			
			// 아래에서 부터 위로 잔디 정리를 위해 정렬
			Collections.sort(arr);
			
			// 현재까지 정리한 위치
			now = 0;
			for (int i = 0; i < ny; i++) {
				// 현재 까지 잔디 정리를 한 위치에서 연속적으로 연결이 된다면
				if (arr.get(i) - (w / 2) <= now) {
					now = arr.get(i) + (w / 2);
				} else { // 중간에 빈 공간이 있다면
					check = false;
					break;
				}
			}
			
			// 모든 면적을 하지 못했거나, 중간에 빈 공간이 있다면
			if (!check || now < 100) {
				sb.append("NO\n");
			} else {
				sb.append("YES\n");
			}
		}
		
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
}