/**
 * https://www.acmicpc.net/problem/5046
 */
import java.io.*;
import java.util.*;

class Main {
	
	static class Hotel {
		private int pricePerDay;
		private int[] capacity;
		
		public Hotel(int price, int[] capa) {
			this.pricePerDay = price;
			this.capacity = capa;
		}
		
		public int getPricePerDay() {
			return this.pricePerDay;
		}
		public void setPricePerDay(int price) {
			this.pricePerDay = price;
		}
		
		public int[] getCapacity() {
			return this.capacity;
		}
		public void setCapacity(int[] capa) {
			this.capacity = capa;
		}
	}
	
	static class HotelCheckUtil {
		public static boolean checkHotel(Hotel hotel, int N, int B) {
			boolean enoughRoom = Arrays.stream(hotel.getCapacity()).filter(v -> v >= N).findAny().isPresent();
			boolean enoughBudget = hotel.getPricePerDay() * N <= B;
			return enoughRoom && enoughBudget;
		}
	}
	
	private static List<Hotel> hotels = new ArrayList<>();
	
	public static void main(String[] args) throws IOException {
		try(var br = new BufferedReader(new InputStreamReader(System.in))) {
			int[] inp = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int N = inp[0];
			int B = inp[1];
			int H = inp[2];
			
			for(int i = 0; i < H; i++) {
				int price = Integer.parseInt(br.readLine());
				int[] capa = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				hotels.add(new Main.Hotel(price, capa));
			}
			
			int min = Integer.MAX_VALUE;
			for(int i = 0; i < H; i++) {
				if(HotelCheckUtil.checkHotel(hotels.get(i), N, B)) {
					min = Math.min(min, hotels.get(i).getPricePerDay() * N);
				}
			}
			System.out.println(min != Integer.MAX_VALUE ? String.valueOf(min) : "stay home");
		}
	}
}
