public class Program
{
    public static string DecimalBinary(int num)
    {
        string binary = "";
        while (num > 0)
        {
            binary = (num % 2).ToString() + binary;
            num /= 2;
        }
        return binary;
    }
}
