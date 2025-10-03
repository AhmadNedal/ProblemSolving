using System;

class Program
{
    static void Main(string[] args)
    {
         Console.ReadLine();
        string str = Console.ReadLine();
        int ans = 0;

        for (int i = 1; i < str.Length; ++i)
        {
            if (str[i] == str[i - 1])
                ans += 1;
        }

        Console.WriteLine(ans);
    }
}
