import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        String season = "";
        if (m >= 3 && m <= 5) season = "Spring";
        else if (m >= 6 && m <= 8) season = "Summer";
        else if (m >= 9 && m <= 11) season = "Fall";
        else season = "Winter";
        System.out.print(season);
    }
}