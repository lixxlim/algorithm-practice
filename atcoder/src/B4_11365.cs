// https://www.acmicpc.net/problem/11365
// 00:00:00
#nullable disable

using System.Text;

class B4_11365
{
	/*
	static void Main()
	{
        Console.WriteLine("--- Started ---");
		Solution();
        Console.WriteLine("--- Finished ---");
	}
	*/

	static void Solution()
	{
		var sb = new StringBuilder();
		while (true)
		{
			var str = Console.ReadLine();
			if ("END".Equals(str)) break;
			char[] chars = str.ToCharArray();
			Array.Reverse(chars);
	        sb.Append(chars).Append('\n');
		}
		Console.WriteLine(sb);
	}
}