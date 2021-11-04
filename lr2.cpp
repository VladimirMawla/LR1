using System;
using System.IO;

namespace l_r_2
{
    class Program
    {
        static void Main(string[] args)
        {
            TextWriter save_out = Console.Out;
            TextWriter save_in = Console.In;
            var new_out = new StreamWriter(@"output.txt");
            var new_in = new StreamWriter(@"input.txt");
            Console.SetOut(new_out);
            Console.SetIn(new_in);

            double a1, a2, a3, a4, a5;
            double s, k;
            a1 = Convert.ToDouble(Console.ReadLine());
            a2 = Convert.ToDouble(Console.ReadLine());
            a3 = Convert.ToDouble(Console.ReadLine());
            a4 = Convert.ToDouble(Console.ReadLine());
            a5 = Convert.ToDouble(Console.ReadLine());

            if((a2 - a1 + a3 < 0) || (a3 == 0))
                Console.WriteLine("ERROR");
            else
                {
                    s = (Math.Sqrt(a2 - a1 + a3)) / a3 + (a4 / 100);
                    Console.WriteLine(String.Format("{0:0.000}", s));
                }
            if ((a3 + a4 < 0) || ((a1 - a3) == 0))
                console.WriteLine("ERROR");
            else
                {
                    k = Math.Sqrt((a3 + a4) / (a1 - a3)) * Math.Pow((a2 - a5), 2);
                    Console.WriteLine(String.Format("{0:0.000}", k));
                }
            Console.SetOut(save_out); new_out.Close();
            Console.SetIn(save_in); new_in.Close();
        }
    }
}