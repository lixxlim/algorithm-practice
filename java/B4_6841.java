import java.io.*;
import java.util.*;

public class B4_6841 {
	public static void main(String[] args) throws IOException {
		try (var br = new BufferedReader(new InputStreamReader(System.in))) {
			StringBuilder sb = new StringBuilder();
			while(true) {
				String inp = br.readLine();
				sb.append(ChatConverter.converting(inp)).append("\n");
				if (inp.equals("TTYL")) break;
			};
			System.out.println(sb);
		};
	};
}

class ChatConverter {
	private static Map<String, String> dict = new HashMap<>() {{
		put("CU"   , "see you"                       );
		put(":-)"  , "I’m happy"                     );
		put(":-("  , "I’m unhappy"                   );
		put(";-)"  , "wink"                          );
		put(":-P"  , "stick out my tongue"           );
		put("(~.~)", "sleepy"                        );
		put("TA"   , "totally awesome"               );
		put("CCC"  , "Canadian Computing Competition");
		put("CUZ"  , "because"                       );
		put("TY"   , "thank-you"                     );
		put("YW"   , "you’re welcome"                );
		put("TTYL" , "talk to you later"             );
	}};
	
	public static String converting(String str) {
		return dict.getOrDefault(str, str);
	};
}

