// https://www.acmicpc.net/problem/11549
#nullable disable

class B4_11549
{
	//static void Main()
	//{
	//	Console.WriteLine("--- Started ---");
	//	Solution();
	//	Console.WriteLine("--- Finished ---");
	//}

	static void Solution()
	{
		int t = int.Parse(Console.ReadLine());
        int res = Console.ReadLine().Split().Select(int.Parse).Where(n => n == t).Count();
		Console.WriteLine(res);
	}
}