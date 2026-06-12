import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int start = sc.nextInt();
        int end = sc.nextInt();
        int cnt, ans;
        ans = 0;
        for (int i = start; i <= end; i++) {
            cnt = 0;
            for (int j = i / 2; j > 0; j--) {
                if (i % j == 0) cnt++;
            }
            if (cnt == 2) ans++;
        }
        System.out.print(ans);
    }
}