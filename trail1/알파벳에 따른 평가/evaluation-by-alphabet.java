import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        char s = sc.next().charAt(0);
        String grade;
        if (s == 'S') grade = "Superior";
        else if (s == 'A') grade = "Excellent";
        else if (s == 'B') grade = "Good";
        else if (s == 'C') grade = "Usually";
        else if (s == 'D') grade = "Effort";
        else grade = "Failure";

        System.out.print(grade);
    }
}