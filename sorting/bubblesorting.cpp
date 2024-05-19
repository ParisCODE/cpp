#include <iostream>
#include<cmath>
#include<algorithm> 
using namespace std;

int main(){
    int n;
    int a[1001]={};
    
    // 读取数组大小
    cout<<"please input the amount of numbers to sort:";
    cin >> n;
    

    // 读取数组元素
    cout<<"\nplease input each number,seperated by a space:";
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
	cout<<"\n";
    // 输出排序后的数组
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

