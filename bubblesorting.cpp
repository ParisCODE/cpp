#include <iostream>
using namespace std;

int main() {
    int n;
    const int MAX_SIZE = 900000000;
    int a[MAX_SIZE];
    
    // ��ȡ�����С
    cin >> n;

    // ������뷶Χ
    if (n > MAX_SIZE) {
        cout << "�������ݴ�С��������Χ��" << endl;
        return 1;
    }

    // ��ȡ����Ԫ��
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // ð������
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // �������������
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
