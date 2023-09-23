// https://atcoder.jp/contests/abc132/tasks/abc132_c
// 00:10:23
#nullable disable

class DivideTheProblems
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int mid = int.Parse(Console.ReadLine()) / 2;
        int[] tests = Console.ReadLine()
                             .Split()
                             .Select(int.Parse)
                             .Order()
                             .ToArray();
		Console.WriteLine(tests[mid] - tests[mid-1]);
	}
}