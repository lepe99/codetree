import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int mid;
        if (A > B && B > C || C > B && B > A) mid = B;
        else if (A > C && C > B || B > C && C > A) mid = C;
        else mid = A;
        System.out.print(mid); 
    }
}