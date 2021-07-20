public class Main {
    public static String decimalBinary(int num) {
        String binary = "";
        while (num > 0) {
            binary = Integer.toString(num % 2) + binary;
            num /= 2;
        }
        return binary;
    }
}
