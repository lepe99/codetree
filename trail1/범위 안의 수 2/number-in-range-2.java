import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0, cnt = 0;
        for (int i = 0; i < 10; i++) {
            int a = sc.nextInt();
            if (a >= 0 && a <= 200) {
                sum += a;
                cnt++;
            }
        }
        System.out.printf("%d %.1f", sum, 1.0 * sum / cnt);
    }
}