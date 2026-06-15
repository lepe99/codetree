import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a1 = sc.nextInt();
        int a2 = sc.nextInt();
        int b1 = sc.nextInt();
        int b2 = sc.nextInt();
        char ans = ' ';
        if (a1 > b1) ans = 'A';
        else if (a1 < b1) ans = 'B';
        else if (a2 > b2) ans = 'A';
        else ans = 'B';
        System.out.print(ans);
    }
}