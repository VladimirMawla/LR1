using System;

using System.Collections.Generic;

using System.Linq;

using System.Text;

using System.Threading.Tasks;

using System.IO;

namespace Lab4

{

    class Program

    {

        static void Main(string[] args)

        {
            TextWriter save_out = Console.Out;

            TextReader save_in = Console.In;

            var new_out = new StreamWriter(@"output.txt");
            var new_in = new StreamReader(@"input.txt");

            Console.SetOut(new_out);

            Console.SetIn(new_in);

            double s = 0;

            int n = Convert.ToInt32(Console.ReadLine());
            double x = Convert.ToDouble(Console.ReadLine());
            double y = Convert.ToDouble(Console.ReadLine());

            for (int i = 1; i <= n; i++)

                if (i % 2 == 0)

                    s += (x * Math.Pow(y, i + 1)) / (i * (i + 2));

                else

                    s -= (y * Math.Pow(x, i + 1)) / (i * (i + 2));

            Console.WriteLine("{0:0.00000}", s);

            Console.SetOut(save_out);
            new_out.Close();

            Console.SetIn(save_in);
            new_in.Close();
        }
    }