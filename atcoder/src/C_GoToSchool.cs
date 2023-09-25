// https://atcoder.jp/contests/abc142/tasks/abc142_c
#nullable disable

class GoToSchool
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int n = int.Parse(Console.ReadLine());
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] attend = new int[n];
        for(int i = 0; i < n; i++) { attend[a[i]-1] = i+1; }
        foreach(int i in attend) { Console.WriteLine(i + " "); }
	}
}