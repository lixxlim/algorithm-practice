/**
 * https://www.acmicpc.net/problem/2890
 */
import static java.lang.Integer.parseInt;
import static java.lang.Character.isDigit;
import static java.lang.Character.getNumericValue;

import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        try(var br = new BufferedReader(new InputStreamReader(System.in))) {
            // 입력
            int R = parseInt(br.readLine().split(" ")[0]);

            // 팀넘버 및 팀위치 확인 후 저장
            Team[] teams = new Team[R];
            for(int i = 0; i < R; i++) {
                teams[i] = getDistFromStart(br.readLine());
            }

            // 비어있는 라인 없애고 새로운 배열로 생성
            Team[] newTeams = Arrays.stream(teams).filter(team -> team.teamNum > 0).toArray(Team[]::new);

            // 가장 멀리 간 팀 순서로 정렬(가장 등수가 높은 팀이 앞)
            Arrays.sort(newTeams, (a, b) -> b.distFromStart - a.distFromStart);

            // 팀랭크 기록
            int rank = 1;
            newTeams[0].rank = rank;
            for(int i = 1; i < newTeams.length; i++) {
                newTeams[i].rank = newTeams[i-1].distFromStart == newTeams[i].distFromStart ? rank : ++rank;
            }

            // 출력
            Arrays.stream(newTeams)
                  .sorted((a, b) -> a.teamNum - b.teamNum)
                  .forEach(System.out::println);
        }
    }

    private static Team getDistFromStart(String line) {
        Team team = new Team();
        for(int i = 0; i < line.length(); i++) {
            if(isDigit(line.charAt(i))) {
                team.distFromStart = i;
                team.teamNum = getNumericValue(line.charAt(i));
                break;
            }
        }
        return team;
    }


}

class Team {
    int teamNum;
    int rank;
    int distFromStart;

    @Override
    public String toString() {
        return String.valueOf(this.rank);
    }
}
