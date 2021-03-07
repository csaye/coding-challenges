import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        String input = scanner.nextLine();
        int n = Integer.parseInt(input);
        int f = 1;

        while (n > 1) {
            f *= n;
            n--;
        }
        System.out.println(f);
    }
}
