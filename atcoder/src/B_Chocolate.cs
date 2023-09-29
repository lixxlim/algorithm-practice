// https://atcoder.jp/contests/abc092/tasks/abc092_b
// 00:25:44
#nullable disable

class B_Chocolate
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int persons = int.Parse(Console.ReadLine());
        int[] dx = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int totalDays = dx[0];
        int totalChoco = dx[1];
        while(persons-- > 0)
        {
            int termOfEating = int.Parse(Console.ReadLine());
            totalChoco++;
            for (int i = termOfEating+1, j = 1; i <= totalDays; i = ++j * termOfEating + 1)
            {
                totalChoco++;
            }

        }
		Console.WriteLine(totalChoco);
	}
}