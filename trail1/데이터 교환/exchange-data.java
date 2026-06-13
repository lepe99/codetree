public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        int a = 5;
        int b = 6;
        int c = 7;
        int temp = b;
        int temp2 = c;
        b = a;
        c = temp;
        a = temp2;
        System.out.print(a + "\n" + b + "\n" + c);
    }
}