import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			var people = Arrays.asList(br.readLine().split(" "));
			var apple = br.readLine().split(" ");
			System.out.println(people.indexOf(apple[0])+1);
		}
	}
}
