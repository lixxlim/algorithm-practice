// https://www.acmicpc.net/problem/11283
#nullable disable

class B4_11283
{
	//static void Main()
	//{
        //Console.WriteLine("--- Started ---");
	//	Solution();
        //Console.WriteLine("--- Finished ---");
	//}

	static void Solution()
	{
		int baseValue = '가';
		System.Globalization.CultureInfo.CurrentCulture = System.Globalization.CultureInfo.InvariantCulture;
		char c = Console.ReadKey().KeyChar;
		Console.WriteLine(((int)c)-baseValue+1);
	}
}
