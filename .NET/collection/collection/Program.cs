using System;
using System.Collections;

namespace collection
{
    class Program
    {
        static void Main(string[] args)
        {
            Hashtable hashtable = new Hashtable();
            hashtable.Add(1,"vinay");
            hashtable.Add(2,"RAM");
            Console.WriteLine(hashtable[2]);
           // Console.WriteLine(hashtable[1].GetHashCode());
            foreach (object key in hashtable.Keys)
                Console.WriteLine(key+ "       "+hashtable[key]);

        }

    }
}
