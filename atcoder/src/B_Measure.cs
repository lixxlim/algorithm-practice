// 
#nullable disable

class B_Measure
{
	static void Main()
	{
		Solution();
	}

	static void Solution()
	{
		int n = int.Parse(Console.ReadLine());
    List<int> nj = new List<int>();
    for(int j = 1; j < 10; j++)
    {
      if(n % j == 0) nj.Add(j);
    }
    Console.Write("1");
    for(int i = 1; i < n; i++)
    {
      String s = "-";
      foreach(int j in nj)
      {
        if(i % (n / j) == 0) 
        { 
          s = j.ToString();
          break;
        }
      }
      Console.Write(s);
    }
    Console.Write("1");
	}
}

/*
import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    StringBuilder sb = new StringBuilder("1");
    List<Integer> nj = new ArrayList<>();
    for(int j = 1; j < 10; j++) {
      if(n % j == 0) nj.add(j);
    }
    for(int i = 1; i < n; i++) {
      String r = "-";
      for(Integer j : nj) {
        if(i % (n / j) == 0) { r = String.valueOf(j); break;};
      }
      sb.append(r);
    }
    System.out.println(sb.append("1"));
    br.close();
  }
}
*/