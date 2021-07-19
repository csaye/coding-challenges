public class Main {
    public static int binaryDecimal(String binary) {
        char[] chars = input.toCharArray();
        int total = 0;
        for (char ch : chars) {
            total += total + Character.getNumericValue(ch);
        }
        return total;
    }
}
