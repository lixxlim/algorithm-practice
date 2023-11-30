// https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b
#nullable disable

class B_NiceShopping
{
	static void Main()
	{
        Console.WriteLine("--- Started ---");
		Solution();
        Console.WriteLine("--- Finished ---");
	}

    static void Solution()
    {
        int[] ABM = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] As = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] Bs = Console.ReadLine().Split().Select(int.Parse).ToArray();

        int min = As.Min() + Bs.Min();
        for (int i = 0; i < ABM[2]; i++)
        {
            int[] Ms = Console.ReadLine().Split().Select(int.Parse).ToArray();
            min = Math.Min(As[Ms[0]-1] + Bs[Ms[1]-1] - Ms[2], min);
        }

        Console.WriteLine(min);
    }
}
