// https://atcoder.jp/contests/abc139/tasks/abc139_b
#nullable disable

class B_PowerSocket
{
	static void Main()
	{
		Console.WriteLine(Solution());
	}

	static String Solution()
	{
		int[] ab = Console.ReadLine().Split().Select(int.Parse).ToArray();
		int tab = ab[0];
		int need = ab[1];
		if(need == 1) return "0";
		if(need == 2) return "1";
		if(tab == 2) return "-1";
		double gap = need - tab;
		double up = tab - 1;
		return (Math.Ceiling(gap / up) + 1).ToString();
	}
}