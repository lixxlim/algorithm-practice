// https://atcoder.jp/contests/abc149/tasks/abc149_c
// 00:18:12
#nullable disable

class C_NextPrime
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int x = int.Parse(Console.ReadLine());
        while(true)
        {
            bool chck = false;
            for(int i = 2; i < Math.Abs(x); i++)
            {
                if(x%i==0) 
                {
                    chck = true;
                    break;
                }
            }
            if(chck) { x++; continue; }
            break;
        }
		Console.WriteLine(x);
	}
}