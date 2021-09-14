#include <iostream>
#include "generalSort.h"
#include <iomanip>
#include <array>

using std::cout;
using std::endl;

int main() {
    //数组升序排序
    double arr[]{ 3.0, 2.0, 8.0, 4.0, 7.0, 1.0, 5.0, 6.0 };
    int size = sizeof(arr)/sizeof(arr[0]);//此句不能放进函数，因为传参时arr是指向首元素的指针，其size和arr[0]相同
    for (auto i : arr) {
        std::cout << std::fixed << std::setprecision(2) << i << "  "; //两位小数输出
    }
    std::cout << std::endl;

    AscendingSort(arr, size);

    for (auto i : arr) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }

    std::cout << std::endl;

    //array升序排序
    std::array list{ 3.0, 2.0, 8.0, 4.0, 7.0, 1.0, 5.0, 6.0 };
    AscendingSort(list);
    for (auto i : list) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }

}