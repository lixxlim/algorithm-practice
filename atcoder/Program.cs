#nullable disable
using System;

public class Programs
{
	public static void Main(String[] args) 
	{
		B_OverlappingSheets.Solution();
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

class B_OverlappingSheets
{
	static int[,] map = new int[101,101];
	static int result = 0;

	public static void Solution()
	{
		int loop = int.Parse(Console.ReadLine());
		for(int l = 0; l < loop; l++)
		{
			int[] sq = Console.ReadLine().Split().Select(int.Parse).ToArray();
			for(int x = sq[0]; x < sq[1]; x++)
			{
				for(int y = sq[2]; y < sq[3]; y++)
				{
					if(map[x,y] == 0) result++;
					map[x,y] = 1;
				}
			}
		}
		Console.WriteLine(result);
	}
}
