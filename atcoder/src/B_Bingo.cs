// https://atcoder.jp/contests/abc157/tasks/abc157_b
#nullable disable


class B_Bingo
{
	static void Main()
	{
		Solution();
	}

	static void Solution()
	{
        int[,] bingo = new int[3,3];
        for(int i = 0; i < 3; i++) {
            int[] b = Console.ReadLine().Split().Select(int.Parse).ToArray();
            for(int j = 0; j < 3; j++) {
                bingo[i,j] = b[j];
            }
        }
        int n = int.Parse(Console.ReadLine());
        for(int i = 0; i < n; i++) {
            int b = int.Parse(Console.ReadLine());
            Checking(ref bingo, b);
        }
		Console.WriteLine(getBingo(ref bingo));
	}

    static void Checking(ref int[,] bingo, int b)
    {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(bingo[i,j] == b) { 
                    bingo[i,j] = 0;
                    return;
                }
            }
        }
    }

    private static string getBingo(ref int[,] bingo)
    {
        for(int i = 0; i < 3; i++) {
            if(bingo[i,0] + bingo[i,1] + bingo[i,2] == 0) return "Yes";
        }
        for(int i = 0; i < 3; i++) {
            if(bingo[0,i] + bingo[1,i] + bingo[2,i] == 0) return "Yes";
        }
        if(bingo[0,0] + bingo[1,1] + bingo[2,2] == 0) return "Yes";
        if(bingo[2,0] + bingo[1,1] + bingo[0,2] == 0) return "Yes";
        return "No";
    }

}