// https://atcoder.jp/contests/abc160/tasks/abc160_c
#nullable disable

class TravelingSalesmanAroundLake
{
	// static void Main()
	// {
    //     Console.WriteLine("--- Started ---");
	// 	Solution();
    //     Console.WriteLine("--- Finished ---");
	// }

	static void Solution()
	{
		int[] KN = Console.ReadLine().Split().Select(int.Parse).ToArray();
		int[] An = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int dist = KN[0] - An[KN[1]-1] + An[0];
        for(int i = 0; i < KN[1]-1; i++) {
            dist = Math.Max(An[i+1] - An[i], dist);
        }
		Console.WriteLine(KN[0] - dist);
	}
}