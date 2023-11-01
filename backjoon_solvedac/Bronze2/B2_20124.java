package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/20124
// 00:00:00
import java.io.*;
import java.util.*;

public class B2_20124 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
            Person[] persons = new Person[n];
            while(n-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                persons[n] = new Person(st.nextToken(), Integer.parseInt(st.nextToken()));
            }
            Arrays.sort(persons);
            System.out.println(persons[0].getName());
		}
	}
}

class Person implements Comparable<Person> {

    private String name;
    private int point;

    public Person(String name, int point) {
        this.name = name;
        this.point = point;
    }

    public String getName() { return this.name; }

    @Override
    public int compareTo(Person o) {
        if(this.point == o.point) this.name.compareTo(o.name);
        return o.point - this.point;
    }

}