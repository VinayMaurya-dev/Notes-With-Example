using System;
namespace Application
{
class Program
{
    public static void Main (String[] args)
    {
            Console.WriteLine("HELLO WORLD");
            Program p1 = new Program();
            p1.Techpile();
            Msg p2 = new Msg();
            p2.msg();
            
        
    }
        public void  Techpile()
        {
            Console.WriteLine("This is Techpile");
            Company();
        }
        public void Company()
        {
            Console.WriteLine("Today Your Class will be OFF");
         
        }
}
    class Msg
    {
        public void msg()
        {
            Console.WriteLine("This is message from Msg class");
        }
    }
     
}