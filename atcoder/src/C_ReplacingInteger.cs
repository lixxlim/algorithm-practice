// https://atcoder.jp/contests/abc161/tasks/abc161_c
// 00:26:15
#nullable disable

class ReplacingInteger
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		long[] nk = Console.ReadLine().Split().Select(long.Parse).ToArray();
        long n = nk[0] % nk[1];
        long k = nk[1];
        while(Math.Abs(n - k) < n) { n = Math.Abs(n - k); }
		Console.WriteLine(n);
	}
}