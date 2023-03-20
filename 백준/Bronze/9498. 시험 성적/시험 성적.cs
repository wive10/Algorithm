using System;

namespace exam
{
    class Program
    {
        static void Main()
        {
            // 점수 입력
            int grade = int.Parse(Console.ReadLine());

            // 점수가 90 ~100 A
            if (grade >= 90 && grade <= 100)
            {
                Console.WriteLine("A");
            }
            else if (grade >= 80 && grade <= 89)
            {
                Console.WriteLine("B");
            }
            else if (grade >= 70 && grade <= 79)
            {
                Console.WriteLine("C");
            }
            else if (grade >= 60 && grade <= 69)
            {
                Console.WriteLine("D");
            }
            else
            {
                Console.WriteLine("F");
            }
        }
    }
}