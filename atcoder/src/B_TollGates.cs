// https://atcoder.jp/contests/abc094/tasks/abc094_b
// 00:10:49
#nullable disable

class B_TollGates
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
        int[] nmx = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int front = Console.ReadLine().Split().Select(int.Parse).Where(v => v < nmx[2]).Count();
		Console.WriteLine(Math.Min(front, nmx[1] - front));
	}
}