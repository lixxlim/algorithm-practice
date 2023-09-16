// https://atcoder.jp/contests/abc088/tasks/abc088_b
#nullable disable

class B_CardGameForTwo
{
	// static void Main()
	// {
	// 	Solution();
	// }

	static void Solution()
	{
		int n = int.Parse(Console.ReadLine());
        int[] a = Console.ReadLine().Split().Select(int.Parse).OrderDescending().ToArray();

        int[] AB = new int[2];
        for(int i = 0; i < n; i++) { AB[i%2] += a[i];}
        
		Console.WriteLine(AB[0]-AB[1]);
	}
}