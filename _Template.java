/**
 */
package class1;

import java.io.*;

public class _Template {
  public static void main(String[] args) {
    try(BufferedReader bw = new BufferedReader(new InputStreamReader(System.in))) {
      String s = bw.readLine();

    } catch (Exception e) { e.printStackTrace(); }
  }

  public String solution(String... s) {

  }
}

class Test {
  public static void main(String[] args) {
    _Template t = new _Template();
    String input = """
        
        """;
    System.out.println(t.solution(input));
  }
}