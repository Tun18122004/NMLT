#include <iostream> 
using namespace std;


void nhapn(int a[], int n) {
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
}
void xuatn(int a[], int n) {
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
}
int tinhtb(int a[], int n) {
	int s = 0;
	float tb;
	for (int i = 0;i < n;i++) {
		s += a[i];
	}
	tb = (float)s / n;
	cout << "Trung  binh cac phan tu la :";
	cout << tb << endl;
	return tb;
}
void chan(int a[], int n) {
	for (int i = 0;i < n;i++) {
		if (i % 2 == 0) {
			cout << "Cac phan tu o vi tri chan la:";
			cout << a[i] << endl;
		}
	}
}
int dem(int a[], int n) {
	int dem = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] > 0) {
			dem += 1;
		}
	}
	cout << "Co tat ca so nguyen duong la :";
	cout << dem << endl;
	return dem;
}
int demx(int a[], int n) {
	int x, dem=0;
	cout << "Nhap x:";
	cin >> x;
	for (int i = 0;i < n;i++) {
		if (a[i] == x) {
			dem += 1;
		}
	}
	cout << "Co bao nhieu gia tri x la :";
	cout << dem << endl;
	return dem;
}
void timvt(int a[], int n) {
	int x;
	cout << "Nhap x:";
	cin >> x;
	for (int i = 0;i < n;i++) {
		if (a[i] == x) {
			cout << "Vi tri cua x la :" << i << endl;
		}
	}
}
void max1(int a[], int n) {
	int max = 0,min = n;
	for (int i = 0;i < n;i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << "So lon nhat la:";
	cout << max <<  endl;
	for (int i = 0;i < n;i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << "So nho nhat la :";
	cout << min << endl;
}
void kt(int a[], int n) {
	for (int i = 0;i < n;i++) {
		if (a[i] == 0) {
			break;
		}
		else {
			continue;
		}
	}
}
bool ktra(int n) {
	for (int i = 2;i < n;i++) {
		if (n % i == 0) {
			return false;
		}
		else {
			return true;
		}
	}
}
void maxchan(int a[], int n) {
	int max = 0;
	for (int i=0;i < n;i++) {
		if (a[i] % 2 == 0) {
			if (a[i] > max) {
				max = a[i];
			}
		}
		else {
			continue;
		}
	}
	cout << "So chan lon nhat la:";
	cout << max << endl;
}
void ngto(int a[], int n) {
	for (int i = 0;i < n;i++) {
		if (ktra(a[i]) == true) {
			cout << "So nguyen to la :";
			cout << a[i] << endl;
		}
	}
}
int main() {
	int n;
	const int max = 100;
	cin >> n;
	int a[max];
	nhapn(a, n);
	xuatn(a, n);
	demx(a, n);
	max1(a, n);
	tinhtb(a, n);
	dem(a, n);
	chan(a, n);
	maxchan(a, n);
	timvt(a, n);
	kt(a, n);
	ngto(a, n);
	return 1;
}