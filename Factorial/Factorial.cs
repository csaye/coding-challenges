public class Program
{
    public static int Factorial(int num)
    {
        int fac = 1;
        while (num > 1)
        {
            fac *= num;
            num--;
        }
        return fac;
    }
}
