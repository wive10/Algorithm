using System;

namespace Multi
{
    class Program
    {
        static void Main()
        {
            //세자리 숫자 두개 입력
            int A = int.Parse(Console.ReadLine());
            int B = int.Parse(Console.ReadLine());

            //두번째 숫자를 자리수 마다 나눈다.
            int B1 = B / 10; // 12
            int B10 = B1 % 10; //2
            int B100 = B1 / 10; //1
                B1 = B % 10; //3
                             //
            //첫번째 숫자와 두번째숫자의 일의 자리를 곱한 값 출력
            Console.WriteLine(A * B1);
            //첫번째 숫자와 두번째숫자의 십의 자리를 곱한 값 출력
            Console.WriteLine(A * B10);
            //첫번째 숫자와 두번째숫자의 백의 자리를 곱한 값 출력
            Console.WriteLine(A * B100);

            //두 수를 곱한 값을 출력
            Console.WriteLine(A * B);
        }
    }
}