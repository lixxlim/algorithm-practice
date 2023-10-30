package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/5602
// 00:59:19
import java.io.*;
import java.util.*;

public class B2_5602 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));) {
			int[] nm = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[][] vote = new int[nm[1]][2];
            for(int i = 0; i < nm[1]; i++) { 
                vote[i][1] = i+1; 
            }
            for(int i = 0; i < nm[0]; i++) {
                int[] m = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
                for(int j = 0; j < m.length; j++) {
                    if(m[j] == 1) vote[j][0]++;
                }
            }
            sort(vote);
            for(int[] i : vote) {
                bw.write(i[1] + " ");
            }
            bw.flush();
		}
	}

    private static void sort(int[][] vote) {
        sort(vote, new int[vote.length][], 0, vote.length-1);
    }

    private static void sort(int[][] arr, int[][] temp, int srt, int end) {
        if(srt >= end) return;
        int mid = srt + (end - srt) / 2;
        sort(arr, temp, srt, mid);
        sort(arr, temp, mid+1, end);

        int idx = srt, q = srt, p = mid+1;
        for(int i = srt; i <= end; i++) { temp[i] = arr[i]; }
        while(q <= mid && p <= end) {
            if(temp[q][0] >= temp[p][0]) { arr[idx++] = temp[q++]; }
            else { arr[idx++] = temp[p++]; }
        }
        for(int i = 0; i <= mid - q; i++) { arr[idx+i] = temp[q+i]; }
    }
}