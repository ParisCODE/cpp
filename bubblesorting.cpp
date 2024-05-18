#include <iostream>
using namespace std;

int main() {
    int n;
    const int MAX_SIZE = 900000000;
    int a[MAX_SIZE];
    
    // 读取数组大小
    cin >> n;

    // 检查输入范围
    if (n > MAX_SIZE) {
        cout << "输入数据大小超过允许范围。" << endl;
        return 1;
    }

    // 读取数组元素
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // 输出排序后的数组
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
