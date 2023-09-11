// https://atcoder.jp/contests/abc319/tasks/abc319_a
#nullable disable

class A_LegendaryPlayers
{
	static void Main()
	{
		Solution();
	}

	static void Solution()
	{
		Dictionary<String, int> rank = new Dictionary<string, int>()
		{ 
			{"tourist", 3858},
			{"ksun48", 3679},
			{"Benq", 3658},
			{"Um_nik", 3648},
			{"apiad", 3638},
			{"Stonefeang", 3630},
			{"ecnerwala", 3613},
			{"mnbvmar", 3555},
			{"newbiedmy", 3516},
			{"semiexp", 3481},
		};
		Console.WriteLine(rank[Console.ReadLine()]);
	}
}