// https://atcoder.jp/contests/abc086/tasks/abc086_b
#nullable disable

class B_121
{
	static void Main()
	{
		Solution();
	}

	static void Solution()
	{
		int n = int.Parse(Console.ReadLine().Replace(" ",""));
        int sq = (int)Math.Sqrt(n);
		Console.WriteLine(sq * sq == n ? "Yes" : "No");
	}
}
// int n;Console.WriteLine(Math.Pow((int)Math.Sqrt(n = int.Parse(Console.ReadLine().Replace(" ",""))),2) == n ? "Yes" : "No");