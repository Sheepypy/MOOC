#pragma once

template <typename T>
void AscendingSort(T list[], const size_t size) {

    for (int i = 0; i < size - 1; i++) {
        T min = list[i];
        int index = i;//每轮排序的初始化
        for (int j = i + 1; j < size; j++)
        {
            if (list[j] < min) {
                min = list[j];
                index = j;
            }
        }
        if (index != i) {//交换每轮首位和最小值
            list[index] = list[i];
            list[i] = min;
        }
    }
}

template <typename T,int N>
void AscendingSort(std::array<T,N>& list) {
    int size = N;
    for (int i = 0; i < size - 1; i++) {
        T min = list[i];
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (list[j] < min) {
                min = list[j];
                index = j;
            }
        }
        if (index != i) {
            list[index] = list[i];
            list[i] = min;
        }
    }
}

