using System;

namespace l_r_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Lab. 1");
            Console.WriteLine();
            Console.WriteLine("Elmawla Vladimir");
            Console.WriteLine("INS-b-o-20-2");
            Console.WriteLine("Information sysytems and technologies");
            Console.WriteLine("DoB: 22-10-2000");
            Console.WriteLine("City: Stavropol");
            Console.WriteLine("Best subject: Informatics");
            Console.WriteLine("Interests: Programming");
            Console.WriteLine();
            Console.WriteLine("structure console apps");
            Console.WriteLine();
            Console.WriteLine("Press ane key to continue...");

            Console.ReadKey();

            Console.WriteLine();
            Console.WriteLine("Lab 1");
            Console.WriteLine("Variant 5");
            Console.WriteLine();
            Console.WriteLine("H = (g*h)/(17*d)+b/h1-(x+y)/4");
            int x, y, h1, g, h, d, b;
            Console.Write("x = ");
            x = Convert.ToInt32(Console.ReadLine());
            Console.Write("y = ");
            y = Convert.ToInt32(Console.ReadLine());
            Console.Write("h1 = ");
            h1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("g = ");
            g = Convert.ToInt32(Console.ReadLine());
            Console.Write("h = ");
            h = Convert.ToInt32(Console.ReadLine());
            Console.Write("d = ");
            d = Convert.ToInt32(Console.ReadLine());
            Console.Write("b = ");
            b = Convert.ToInt32(Console.ReadLine());

            float H;
            Console.WriteLine("Initial value");
            Console.WriteLine("x = {0}", x);
            Console.WriteLine("y = {0}", y);
            Console.WriteLine("h1 = {0}", h1);
            Console.WriteLine("g = {0}", g);
            Console.WriteLine("h = {0}", h);
            Console.WriteLine("d = {0}", d);
            Console.WriteLine("b = {0}", b);
            Console.WriteLine("");
            H = (g * h) / (17 * d) + b / h1 - (x + y) / 4;
            Console.WriteLine("H = {0}", H);
            Console.WriteLine("");
            Console.WriteLine("Press any key to complete...");
            Console.ReadKey();

        }
    }
}