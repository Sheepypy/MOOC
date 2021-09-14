#include <iostream>
#include "generalSort.h"
#include <iomanip>
#include <array>

using std::cout;
using std::endl;

int main() {
    //������������
    double arr[]{ 3.0, 2.0, 8.0, 4.0, 7.0, 1.0, 5.0, 6.0 };
    int size = sizeof(arr)/sizeof(arr[0]);//�˾䲻�ܷŽ���������Ϊ����ʱarr��ָ����Ԫ�ص�ָ�룬��size��arr[0]��ͬ
    for (auto i : arr) {
        std::cout << std::fixed << std::setprecision(2) << i << "  "; //��λС�����
    }
    std::cout << std::endl;

    AscendingSort(arr, size);

    for (auto i : arr) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }

    std::cout << std::endl;

    //array��������
    std::array list{ 3.0, 2.0, 8.0, 4.0, 7.0, 1.0, 5.0, 6.0 };
    AscendingSort(list);
    for (auto i : list) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }

}