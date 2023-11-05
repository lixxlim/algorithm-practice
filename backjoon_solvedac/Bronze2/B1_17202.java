package backjoon_solvedac.Bronze2;
// https://www.acmicpc.net/problem/17202
// 00:31:17
import java.io.*;

public class B1_17202 {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            //// input
			String phone1 = br.readLine();
			String phone2 = br.readLine();

            //// data preprocessing
            int[] numbers = combine(phone1, phone2);

            //// process
            int[] result = compatibility(numbers);

            //// output
            System.out.println("" + result[0] + result[1]);
		}
	}

    private static int[] compatibility(int[] numbers) {
        int[] newNumbers = new int[numbers.length-1];
        for(int i = 0; i < numbers.length-1; i++) {
            newNumbers[i] = (numbers[i] + numbers[i+1])%10;
        }
        if(newNumbers.length > 2) return compatibility(newNumbers);
        return newNumbers;
    }

    private static int[] combine(String phone1, String phone2) {
        int[] result = new int[phone1.length() + phone2.length()];
        for(int i = 0, j = 0; j < phone1.length(); i+=2, j++) {
            result[i] = phone1.charAt(j) - '0';
        }
        for(int i = 1, j = 0; j < phone2.length(); i+=2, j++) {
            result[i] = phone2.charAt(j) - '0';
        }
        return result;
    }
}