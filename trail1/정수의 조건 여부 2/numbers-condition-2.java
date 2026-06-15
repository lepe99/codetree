import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        char ans = ' ';
        if (a == 5) ans = 'A';
        if (a % 2 == 0) ans = 'B'; 
        System.out.print(ans);
    }
}