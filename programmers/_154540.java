package programmers;

import java.util.*;
import java.util.stream.*;

public class _154540 {
  public static void main(String[] args) {
    List<String[]> tests = List.of(
      // new String[]{"2X2X2","X2X2X","2X2X2","X2X2X"},
      new String[]{"111X","XXXX","XXXX","XXXX"},
      new String[]{"XXX","XXX","XXX"},
      new String[]{"XXXX11111","XXXX11111","XXXX11111","XXXX11111","XXXX11111","XXXX11111","XXXX11111"},
      // new String[]{"11111","11111","11111"},
      new String[]{
        "11111111111111X",
        "X11XXXXXXXXXX1X",
        "XXXXXX111111X1X",
        "X111111X1111X1X",
        "X1XXXXX1XXXXX1X",
        "X1X1XX1XX1XXX1X",
        "X1111111111111X",
        "XXXXXXXXXXXXXXX",
        "1XXXXXXXXXXXXX1",
        "1X1111111111111",
        "1XXXXXXXXXXXXX1",
        "1111111111111X1",
        "1X1XXXXX1XXXXX1",
        "1XXXX1XXXXX1XX1",
        "111111111111111"
      }, // 1 55 55
      new String[]{"X"}
    );

    for(String[] test : tests) {
      IntStream.of(solution(test)).forEach(v -> System.out.print(v + " "));
      System.out.println("");
    }
  }

  static int[][] intMap;

  private static int[] solution(String[] maps) {

    intMap = new int[maps.length][maps[0].length()];

    //2차원 지도 작성
    int x = 0;
    for(String s : maps) {
      int y = 0;
      for(char c : s.toCharArray()) {
        if(Character.isDigit(c)) {
          intMap[x][y] = c - '0';
        } else intMap[x][y] = 0;
        y++;
      }
      x++;
    }

    //각 섬별 값을 더해서 저장
    int xx, yy, sum;
    List<Integer> islands = new ArrayList<>();
    for(xx = 0; xx < intMap.length; xx++) {
      for(yy = 0; yy < intMap[xx].length; yy++) {
        sum = 0;
        if(intMap[xx][yy] > 0) { 
          islands.add(dfs(xx,yy,sum));
        }
      }
    }

    //오름차순으로 정렬
    int[] answer = islands.stream()
      .sorted()
      .mapToInt(Integer::valueOf)
      .toArray();

    //값이 없다면 -1
    if (answer.length == 0) answer = new int[]{-1};

    return answer;
  }

  public static int dfs(int x, int y, int sum) {
    try {
      if(intMap[x][y] < 1) return 0;
      sum += intMap[x][y];
      intMap[x][y] = 0;
      if(y > 0 && intMap[x][y-1] > 0) sum += dfs(x,y-1,0);
      if(y+1 < intMap[x].length) sum += dfs(x,y+1,0);
      if(x > 0 && intMap[x-1][y] > 0) sum += dfs(x-1,y,0);
      if(x+1 < intMap.length) sum += dfs(x+1,y,0);
    } catch (Exception e) {}
    return sum;
  }

  public static void mapImagin(int sum) {
    System.out.println("sum:"+sum);
    for(int[] map : intMap) {
      for(int i : map) {
        System.out.print(i);
      }
      System.out.println("");
    }
    try{
      Thread.sleep(500);
      System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    } catch (Exception e) {}
  }

}
