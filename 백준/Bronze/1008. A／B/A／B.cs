using System;

namespace Plus
{
    class Program
    {
        static void Main()
        {
            //string 변수 두개를 만든다. 하난 숫자를 문자열로 받고 하난 그 문자열의 숫자를 각각 저장한다.
            string sentence = Console.ReadLine();
            string[] word = sentence.Split();

            double a = double.Parse(word[0]);
            double b = double.Parse(word[1]);
            Console.WriteLine(a / b);
        }
    }
}