import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string to reverse: ");
        String input = scanner.nextLine();
        StringBuilder sb = new StringBuilder(input);
        String output = sb.reverse().toString();
        System.out.println(output);
    }
}
