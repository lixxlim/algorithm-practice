/**
 */
import java.io.*;

public class _Template {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out))) {
      String s = br.readLine();
      System.out.println(s);
    } catch (Exception e) { e.printStackTrace(); }
  }
}