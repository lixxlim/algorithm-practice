/*
 * https://www.acmicpc.net/problem/21665
 */
#nullable disable
using System;
using System.Text;

class B4_21665
{
	//static void Main()
	//{
	//	Console.WriteLine("--- Started ---");
	//	Solution();
	//	Console.WriteLine("--- Finished ---");
	//}
	
	static void Solution()
	{
		int ret = 0;
		int[] nm = Console.ReadLine().Split().Select(int.Parse).ToArray();
		string[] map = new string[nm[0]];
		string[] cpy = new string[nm[0]];
		for (int i = 0; i < nm[0]; i++) {
			map[i] = Console.ReadLine();
		}
		Console.ReadLine();
		for (int i = 0; i < nm[0]; i++) {
			cpy[i] = Console.ReadLine();
			for (int j = 0; j < nm[1]; j++) {
				if (map[i][j] == cpy[i][j]) ret++;
			}
		}
		Console.WriteLine(ret);
	}
}
