#include<iostream>

using namespace std;
bool visit[10];
int a[10];
void go(int n, int m, int index, int start) {
	if (index == m) {
		for (int i = 0;i < m;i++)
			cout << a[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i =start;i <= n;i++) {
		if (visit[i])
			continue;
		visit[i] = true;
		a[index] = i;
		go(n, m, index + 1,i+1);
		visit[i] = false;
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	go(n, m, 0,1);
}