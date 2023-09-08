#nullable disable
using System;

public class Programs
{
	public static void Main(String[] args) 
	{
		A_FullMoon.Solution();
	}
}

class A_FullMoon
{
	public static void Solution()
	{
		int[] n = Console.ReadLine().Split().Select(int.Parse).ToArray();
		Console.WriteLine(Check(n));
	}

	public static int Check(int[] n)
	{
		if (n[0] < n[1]) return 0;
    if (n[0] == n[1]) return 1;
    return ((n[0] - n[1]) / n[2]) + 1;
	}
}
