// https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
#nullable disable

using System.Text.RegularExpressions;

class B_Bishop
{
	// static void Main()
	// {
	// 	Solution();
	// }

	static void Solution()
	{
		ulong[] hw  = Console.ReadLine().Split().Select(ulong.Parse).ToArray();
        if(hw[0] == 1 || hw[1] == 1) { Console.WriteLine(1); return; }
        ulong result = hw[0] * hw[1] / 2;
        if(hw[0] * hw[1] % 2 == 1) result++;
		Console.WriteLine(result);
	}
}