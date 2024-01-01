#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> array) {
    int count_size = *max_element(array.begin(), array.end())+1;
    vector<int> count(count_size);
    int max = count[0];
    int max_n = count[0];
                                 
    //array의 원소에 해당되는 count배열에 카운트한다. 
    for (int i = 0; i < array.size(); i++) {
        count[array[i]]++;
    }
    //count배열을 싹 돌려 가장 카운트가 많이 된 배열을 찾는다.
    for (int i = 0; i < count_size; i++) 
        if (max < count[i]) { max = count[i]; max_n = i; }
                                 
    //또 한번 가장 많이 카운트된 배열과 같은 배열을 찾는다.
    for (int i = max_n; i < count_size;i++) 
        if (max_n != i && max == count[i]) return -1;
    return max_n;
}