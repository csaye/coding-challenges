public class Main {
    public static void main(String[] args) {
        for (int i = 2; i < 100; i++) {
            boolean isPrime = true;
            double upperBound = Math.sqrt(i);

            for (int j = 2; j <= upperBound; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) System.out.println(i);
        }
    }
}
