using System;

namespace Remainder
{
    class Program
    {
        static void Main()
        {
            //숫자를 세개를 가로로 입력 받는다.5 
            string Input = Console.ReadLine();
            string[] num = Input.Split();
            int a = int.Parse(num[0]);
            int b = int.Parse(num[1]);
            int c = int.Parse(num[2]);

            //(A+B)%C
            Console.WriteLine((a + b) % c);
            //((A%C) + (B%C))%C
            Console.WriteLine((a % c + b % c)%c);

            //(A * B) % C
            Console.WriteLine((a * b) % c);
            //((A % C) + (B % C)) % C
            Console.WriteLine((a % c * b % c) % c);

        }
    }
}