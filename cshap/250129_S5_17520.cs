/**
 * https://www.acmicpc.net/problem/17520
 */

class S5_17520
{
	//static void Main()
	//{
	//	Console.WriteLine("--- Started ---");
	//	Solution();
	//	Console.WriteLine("--- Finished ---");
	//}
	
	static void Solution()
	{
		int n;
		n = int.Parse(Console.ReadLine() ?? String.Empty);
		
		int ans = 1;
		for(int i = 0; i < (n+1)/2; i++) {
			ans = ans * 2 % 16769023;
		}
		
		Console.WriteLine($"{ ans }");
	}
}
