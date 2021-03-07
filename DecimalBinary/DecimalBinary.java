import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        String input = scanner.nextLine();
        int n = Integer.parseInt(input);
        String b = "";

        while (n > 0) {
            b = Integer.toString(n % 2) + b;
            n /= 2;
        }
        System.out.println(b);
    }
}
