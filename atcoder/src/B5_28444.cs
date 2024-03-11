// https://www.acmicpc.net/problem/28444
// 00:00:00
#nullable disable

class B5_28444
{
	//static void Main()
	//{
	//	Console.WriteLine("--- Started ---");
	//	Solution();
	//	Console.WriteLine("--- Finished ---");
	//}

	static void Solution()
	{
        var v = Console.ReadLine().Split().Select(int.Parse).ToArray();
		Console.WriteLine(v[0] * v[1] - v[2] * v[3] * v[4]);
	}
}
