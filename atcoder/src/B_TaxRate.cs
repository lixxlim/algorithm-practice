//  https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
#nullable disable

class B_TaxRate
{
	// static void Main()
	// {
	// 	Console.WriteLine(Solution());
	// }

	static string Solution()
	{
		int n = int.Parse(Console.ReadLine());
		int x = (int)Math.Round(n / 1.08);
		if(x + (int)(x * 0.08) == n) return x.ToString();
		if((x-1) + (int)((x-1) * 0.08) == n) return (x-1).ToString();
		if((x+1) + (int)((x+1) * 0.08) == n) return (x+1).ToString();
		return ":(";
	}
}