import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt3 = 0, cnt5 = 0, a;
        for (int i = 0; i < 10; i++) {
            a = sc.nextInt();
            if (a % 3 == 0) cnt3++;
            if (a % 5 == 0) cnt5++;
        }
        System.out.print(cnt3 + " " + cnt5);
    }
}