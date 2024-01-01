#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int testcase, applicants;
	int count;
	int cnt_array[21];
	int document, interview;
	vector<pair<int, int>> score;
	cin >> testcase;


	for (int i = 0; i < testcase; i++) {
		cin >> applicants;

		for (int i = 0; i < applicants; i++) {
			cin >> document >> interview;
			score.push_back(make_pair(document, interview));
		}

		sort(score.begin(), score.end());

		int min= score[0].second;
		count = 0;
		for (int i = 0; i < applicants; i++) {
			if (min >= score[i].second) {
				min = score[i].second;
				count++;
			}
		}

		cnt_array[i] = count;
		score.erase(score.begin(), score.end());
	}
	for (int i = 0; i < testcase; i++) {
		cout << cnt_array[i] << endl;
	}
	return 0;
}
