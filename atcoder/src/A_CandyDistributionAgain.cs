// https://atcoder.jp/contests/agc027/tasks/agc027_a
// 00:18:45
#nullable disable

class A_CandyDistributionAgain
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
        int x = Console.ReadLine().Split().Select(int.Parse).ToArray()[1];
        int[] a = Console.ReadLine().Split().Select(int.Parse).Order().ToArray();
        int result = 0;
        foreach(int i in a)
        {
            if(x >= i) { x -= i; result++; continue; }
            if(x != 0 && result > 0) { x = 0; break; }
            break;
        }
        if(x != 0 && result > 0) { result--; }
		Console.WriteLine(result);
	}
}