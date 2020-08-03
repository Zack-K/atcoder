#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A, sum;
	cin >> N >> A;
	sum = A;
	for (int i = 0; i < N; i++)
	{
		string op;
		int B;

		cin >> op >> B;
		if (op == "+") 
			sum += B;
		else if (op == "-") 
			sum -= B;
		else if (op == "*") 
			sum *= B;
		else if ((B != 0) && (op == "/"))
			sum /= B;
		else
		{
			cout << "error" << endl;
			break;
		}
		cout << i + 1 << ":" << sum << endl;
	}
}
