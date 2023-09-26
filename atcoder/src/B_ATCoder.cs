// https://atcoder.jp/contests/abc122/tasks/abc122_b
// 00:14:40
#nullable disable

class ATCoder
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		String n = Console.ReadLine().Replace("A","@").Replace("C","@").Replace("G","@").Replace("T","@");
        int count = 0;
        for (int i = 0; i < n.Length; i++)
        {
            int innerCount = 0;
            if (n[i] == '@')
            {
                while (i < n.Length && n[i] == '@')
                {
                    innerCount++;
                    i++;
                }
                count = Math.Max(count, innerCount);
            }
        }
		Console.WriteLine(count);
	}
}