/**
 * https://www.acmicpc.net/problem/1269
 */

class S4_1269
{
	static void Main()
	{
		Console.WriteLine("--- Started ---");
		Solution();
		Console.WriteLine("--- Finished ---");
	}
	
	static void Solution()
	{
		var sum = Console.ReadLine().Split().Select(int.Parse).ToArray().Sum();
		var A = new HashSet<int>(Console.ReadLine().Split().Select(int.Parse));
		var B = new HashSet<int>(Console.ReadLine().Split().Select(int.Parse));
		A.UnionWith(B);
		Console.WriteLine(A.Count - (sum - A.Count));
	}
}
