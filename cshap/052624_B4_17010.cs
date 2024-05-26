/*
 * https://www.acmicpc.net/problem/17010
 */
#nullable disable
using System;
using System.Text;

class B4_17010
{
	//static void Main()
	//{
	//	Console.WriteLine("--- Started ---");
	//	Solution();
	//	Console.WriteLine("--- Finished ---");
	//}
	
	static void Solution()
	{
		var sb = new StringBuilder();
		int L = int.Parse(Console.ReadLine());
		for (int i = 0; i < L; i++)
		{
			string[] Nx = Console.ReadLine().Split();
			int N = int.Parse(Nx[0]);
			for (int j = 0; j < N; j++)
			{
				sb.Append(Nx[1]);
			}
			sb.Append('\n');
		}
		Console.WriteLine(sb.Remove(sb.Length-1, 1));
	}
}
