// https://atcoder.jp/contests/abc138/tasks/abc138_c
// 00:14:03
#nullable disable

class Alchemist
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
		Console.WriteLine
        (
            Console.ReadLine()
                   .Split()
                   .Select(double.Parse)
                   .Order()
                   .ToArray()
                   .Aggregate((v1, v2) => (v1+v2)/2)
        );
	}
}