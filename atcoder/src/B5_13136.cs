// https://www.acmicpc.net/problem/13136
#nullable disable

class B_13136
{
	static void Main()
	{
		Console.WriteLine("--- Started ---");
		Solution();
		Console.WriteLine("--- Finished ---");
	}

	static void Solution()
	{
		long[] v = Console.ReadLine().Split().Select(long.Parse).ToArray();
		Console.WriteLine(((v[0] - 1) / v[2] + 1) * ((v[1] - 1)/ v[2] + 1));
	}
}
