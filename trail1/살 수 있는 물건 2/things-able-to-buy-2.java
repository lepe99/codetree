import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String ans;
        if (N >= 3000) ans = "book";
        else if (N >= 1000) ans = "mask";
        else if (N >= 500) ans = "pen";
        else ans = "no";
        System.out.print(ans);
    }
}