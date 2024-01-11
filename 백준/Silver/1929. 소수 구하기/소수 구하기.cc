#include <iostream> 
int main(){	
    int m, n;	
    std::cin >> m >> n; 	
    bool arr[1000001] = { false, }; //false면 소수로 간주	
    arr[0] = arr[1] = true; 	
    for (int i = 2; i * i <= n; ++i) //n의 제곱근의 배수까지만 지우면 된다.	
    {		
        if (arr[i]) continue; //i가 이미 지워진 수인 경우 continue		
        else		{			
            for (int j = 2; j * i <= n; ++j) //i의 배수 지우기			
            {				
                arr[i * j] = true;			
            }		
        }	
    }    	
    for (int i = m; i <= n; ++i) //false인 것만 출력	
    {		if (!arr[i]) std::cout << i << '\n';	
    }
    return 0;
}
