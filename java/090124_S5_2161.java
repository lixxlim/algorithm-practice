/**
 * https://www.acmicpc.net/problem/2161
 */
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(Scanner sc = new Scanner(System.in)) {
			int n = sc.nextInt();
			StringBuffer sb = new StringBuffer();
			Deque<Integer> que = IntStream.rangeClosed(1, n)
										  .boxed()
										  .collect(Collectors.toCollection(LinkedList::new));
			while( que.size() > 1 ) {
				sb.append(que.pop()).append(" ");
				que.addLast(que.pop());
			}
			sb.append(que.pop());
			System.out.println(sb.toString());
		}
	}
}
