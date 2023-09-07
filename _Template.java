/**
 */
import java.io.*;
import java.util.*;

public class _Template {
  public static void main(String[] args) {
      try{
        String[] values = getInput();
        solution(values);
      } catch (Exception e) { e.printStackTrace(); }
  }

  public static String[] getInput() throws IOException {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int loop = Integer.parseInt(br.readLine());
      String[] values = new String[loop];
      for (int i = 0; i < loop; i++) values[i] = br.readLine();

      return values;
    } 
  }

  public static void solution(String[] values) {

    System.out.println(values);
  }
}


class TimeChecker {

  static HashSet<Integer> N = new HashSet<>();
  static HashSet<Integer> M = new HashSet<>();
  static {
    for(int i = 0; i < 10_0000; i++) { N.add(randomAmount());}
    for(int i = 0; i < 10_0000; i++) { M.add(randomAmount());}
  }

  public static void main(String[] args) throws IOException {
    long before = System.currentTimeMillis();
    _Template.solution(null);
    long after = System.currentTimeMillis();
    System.out.println(
      "N size: "+N.size() + " | M size: "+M.size() + "\n" +
      ((after - before)/1000 + ".") +
      ((after - before)%1000 + " s")
    );
  }

  public static int randomAmount() { return (int)(Math.random()*10_0000); }
}