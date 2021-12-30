using System;

namespace myapp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string name;
            Console.WriteLine("Enter Your  Company Name :");
            name = Console.ReadLine();
            if (name.EndsWith('e'))
            {
                Console.WriteLine("TECHPILE TECHNOLOY PVT. LTD.");
            }
            else {
                Console.WriteLine("Sorry! Your Company Not Found.");
            }
        }
    }
}
