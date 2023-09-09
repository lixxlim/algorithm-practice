// https://atcoder.jp/contests/abc317/tasks/abc317_a
#nullable disable
using System;

class A_Potions
{
	// static void Main()
	// {
	// 	Solution();
	// }

	static void Solution()
	{
		int[] NHX = Console.ReadLine().Split().Select(int.Parse).ToArray();
		int n = NHX[0]; int h = NHX[1]; int x = NHX[2];
		int[] Ps = Console.ReadLine().Split().Select(int.Parse).ToArray();
		for(int i = 0; i <= n; i++)
		{
			if(h + Ps[i] >= x)
			{
				Console.WriteLine(i+1);
				break;
			}
		}
	}
}