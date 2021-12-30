using System;

namespace GetSpaces
{
    class Program
    {
        static void Main(string[] args)
        {
            Program p = new Program();
            Console.WriteLine("HELLO VINAY");
            Console.WriteLine("spaces :"+p.getSpases("TECHPILE TECHNOLOGY PVT LTD"));
            Console.WriteLine("spaces :"+p.getSpases("TECHPILE TECHNOLOGY PVT LTD"));
        }
        int getSpases(string str)
        {
            int space=(str.Split(' ').Length - 1);
            return space;
        }
    }
}
