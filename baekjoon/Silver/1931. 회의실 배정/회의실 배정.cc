#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int beginTime, endTime;
vector <pair<int, int>> schedule;

void input(int testcase) {
	for (int i = 0; i < testcase; i++) {
		cin >> beginTime >> endTime;
		//endTime이 중요, endTime을 기점으로 정렬을 위해 먼저 입력
		schedule.push_back(make_pair(endTime, beginTime));
	}
}

int count(int testcase) {
	//정렬 후, endTime이 가장 작은 것으로 초기화
	int time = schedule[0].first;
	int count = 1;

	for (int i = 1; i < testcase; i++)
	{	
		//저장된 endTime보다 시작시간이 크면 
		if (time <= schedule[i].second)
		{
			//count++, endTime 바꾸기
			count++;
			time = schedule[i].first;
		}
	}
	return count;
}
int main() {
	int testcase;

	cin >> testcase;

	input(testcase);
	//endTime이 같아도 beginTime도 작은 순대로 정렬됨.고로 자동 제외(같은 수가 아닐 시, 같은 수ex) 5,5 5,6)
	sort(schedule.begin(), schedule.end());

	cout<< count(testcase);
}
