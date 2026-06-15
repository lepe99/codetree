import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int Y = sc.nextInt();
        boolean ans = false;
        if (Y % 4 == 0) {
            if (Y % 100 != 0 || Y % 400 == 0) ans = true;
        }
        System.out.print(ans);
    }
}