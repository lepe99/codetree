import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.print(a / b + ".");
        // 나머지 이용
        int div, mod;
        for (int i = 0; i < 20; i++) {
            div = (a % b) * 10 / b;
            mod = (a % b) * 10 % b;
            System.out.print(div);
            a = mod;
        }

        
    }
}