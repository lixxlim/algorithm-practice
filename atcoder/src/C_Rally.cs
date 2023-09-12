// https://atcoder.jp/contests/abc156/tasks/abc156_c
#nullable disable

class C_Rally
{
	// static void Main()
	// {
	// 	Solution();
	// }

	static void Solution()
	{
		Console.ReadLine();
		int[] x = Console.ReadLine().Split()
		.Select(int.Parse)
		.OrderBy(v => v)
		.ToArray();

		int sum = int.MaxValue;
		for(int p = 1; p <= 100; p++)
		{
			sum = Math.Min(sum, x.Select(v => (int)Math.Pow(v - p, 2)).Sum());
		};

		Console.WriteLine(sum);
	}
}