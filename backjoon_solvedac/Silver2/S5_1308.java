package backjoon_solvedac.Silver2;
// https://www.acmicpc.net/problem/1308
// 00:00:00
import java.io.*;
import java.time.*;
import java.util.*;

public class S5_1308 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] today = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            LocalDate dateToday = LocalDate.of(today[0], today[1], today[2]);
			int[] dday = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            LocalDate dateDday = LocalDate.of(dday[0], dday[1], dday[2]);
            Period period = Period.between(dateDday, dateToday);
            System.out.println(dateDday + ":" + dateToday);
            System.out.println(period.getYears() < 1000 ? "D-" + period.getDays() : "gg");
		}
	}
}