using System;

namespace Comparison {

    class Program
    {
        static void Main()
        {
            //가로로 두 수 입력
            string sentence = Console.ReadLine();
            string[] num = sentence.Split();
            //A와 B 크기 비교
            int a = int.Parse(num[0]);
            int b = int.Parse(num[1]);

            //만약 A가 B보다 클 때, > 출력
            if (a > b)
            {
                Console.WriteLine(">");
            }
            //만약 A가 B보다 작을 때, < 출력
            else if (a < b)
            {
                Console.WriteLine("<");
            }
            //만약 A가 B보다 같을 때, == 출력
            else
            {
                Console.WriteLine("==");
            }
        }
    }
}