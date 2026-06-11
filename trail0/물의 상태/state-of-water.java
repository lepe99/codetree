import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int deg = sc.nextInt();
        String ans;
        if (deg < 0) ans = "ice";
        else if (deg >= 100) ans = "vapor";
        else ans = "water";
        System.out.print(ans);
    }
}