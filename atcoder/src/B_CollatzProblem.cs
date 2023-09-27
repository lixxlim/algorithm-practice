// https://atcoder.jp/contests/abc116/tasks/abc116_b
#nullable disable

class B_CollatzProblem
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int s = int.Parse(Console.ReadLine());
        List<int> list = new List<int>();
        list.Add(s);
        for(int i = 2; i <= 100_0000; i++)
        {
            int a = fxx(list.Last());
            if(list.Contains(a)) 
            {
                Console.WriteLine(i);
                break;
            }
            list.Add(a);
        }
	}

    static int fxx(int n) { return (n % 2 == 0) ? (n / 2) : (3 * n + 1); }
}