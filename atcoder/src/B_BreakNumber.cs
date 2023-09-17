// https://atcoder.jp/contests/abc068/tasks/abc068_b
#nullable disable

class B_BreakNumber
{
	static void Main()
	{
		int n = int.Parse(Console.ReadLine());
		Console.WriteLine(Solution(n));
	}

	static int Solution(int n)
	{
        if(n <= 2) return n;

        int x = 0, y2 = 0;
        for(int i = n; i > 1; i--)
        {
            int y1 = 0, j = i;
            while(j > 1) {
                if(j % 2 != 0) break;
                j /= 2;
                y1++;
            }
            if(y2 < y1) { x = i; y2 = y1; }
        }

		return x;
	}
}