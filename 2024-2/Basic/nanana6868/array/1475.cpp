using namespace std;

int main() {
	int A, B, C;
	int arr[10] = { 0 };

	cin >> A >> B >> C;

	int num = A * B * C;

	while (num != 0) {
		arr[num % 10] += 1;
		num /= 10;
	}
	for (int i = 0; i < 10;i++) {
		cout << arr[i] << endl;
	}
}
