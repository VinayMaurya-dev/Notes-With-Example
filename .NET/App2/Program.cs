using System;
namespace App2 // Note: actual namespace depends on the project name.
{
    public class Program
    {
        public static void Main(string[] args)
        {
            string password = "Techpile";
                string passbyuser;
            passbyuser = Console.ReadLine();
            int res = password.CompareTo(passbyuser);
            Console.WriteLine(res);
            Console.WriteLine(password==passbyuser);

        }
    }
}