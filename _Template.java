/**
 */
import java.io.*;

public class _Template {

  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
      int repeat = Integer.parseInt(br.readLine());
      String[] values = new String[repeat];
      for (int i = 0; i < repeat; i++) values[i] = br.readLine();

      System.out.println(solution(values));

    } catch (Exception e) {}
  }

  public static int solution(String[] values) {

    return 0;
  }

}