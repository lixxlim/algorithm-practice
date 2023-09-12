// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
#nullable disable

class B_QualificationSimulator
{
	// static void Main()
	// {
	// 	Solution();
	// }

	static void Solution()
	{
        int[] nab = Console.ReadLine().Split().Select(int.Parse).ToArray();
		String n = Console.ReadLine();
        int win = 0, overseas = 0;
        foreach(char c in n)
        {
            if(c == 'a' && win < nab[1]+nab[2])
            {
                Console.WriteLine("Yes");
                win++;
                continue;
            }
            if(c == 'b' && win < nab[1]+nab[2] && overseas < nab[2])
            {
                Console.WriteLine("Yes");
                win++;
                overseas++;
                continue;
            }
            Console.WriteLine("No");
        }
	}
}