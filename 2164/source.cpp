#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N;
	queue<int> q;
	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);
	while (q.size() > 1) {
		q.pop();
		if (q.size() == 1) {
			cout << q.front() << endl;
			return 0;
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	cout << q.front() << endl;
	return 0;
}