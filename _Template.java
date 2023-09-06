/**
 */
import java.io.*;

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
  public static void main(String[] args) {
    long current = System.currentTimeMillis();
    _Template.main(null);
    System.out.println(System.currentTimeMillis() - current + " ms");
  }
}