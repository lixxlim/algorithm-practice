// https://atcoder.jp/contests/agc014/tasks/agc014_a
#nullable disable

class CookieExchanges
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int[] ABC = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int result = 0;
        while(ABC[0]%2==0 && ABC[1]%2==0 && ABC[2]%2==0) {
            result++;
            int a = ABC[1]/2 + ABC[2]/2;
            int b = ABC[0]/2 + ABC[2]/2;
            int c = ABC[0]/2 + ABC[1]/2;
            if(a == ABC[0] && b == ABC[1] && c == ABC[2]) { result = -1; break; }
            ABC[0] = a; ABC[1] = b; ABC[2] = c;
        }
        Console.WriteLine(result);
	}
}