// https://atcoder.jp/contests/abc074/tasks/abc074_b
#nullable disable

class B_CollectingBalls
{
	// static void Main()
	// {
	// 	Solution();
	// }

	static void Solution()
	{
		int n = int.Parse(Console.ReadLine());
		int k = int.Parse(Console.ReadLine());
		int[] x = Console.ReadLine().Split().Select(int.Parse).ToArray();

        int result = 0;
        foreach(int i in x) 
        {
            if (i > (k - i)) result += (k - i) << 1;
            else result += i << 1;
        }
		Console.WriteLine(result);
	}
}