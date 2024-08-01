/**
 * https://www.acmicpc.net/problem/25591
 */
#nullable disable
using System;
using System.Text;

class Program
{
	//static void Main()
	//{
	//	Console.WriteLine("--- Started ---");
	//	Solution();
	//	Console.WriteLine("--- Finished ---");
	//}
	
	static void Solution()
	{
		int a, b, c, d, q, r;
		int[] x;
		
		x = Console.ReadLine().Split().Select(int.Parse).ToArray();
		a = 100 - x[0];
		b = 100 - x[1];
		c = 100 - (a + b);
		d = a * b;
		q = d / 100;
		r = d % 100;
		
		Console.WriteLine($"{a} {b} {c} {d} {q} {r}\n{c + q} {r}");
	}
}
