import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			long[] RCN = Arrays.stream(br.readLine().split(" ")).mapToLong(Long::parseLong).toArray();
			System.out.println(
				((RCN[0]-1)/RCN[2]+1) * ((RCN[1]-1)/RCN[2]+1)
			);
		}
	}
}
