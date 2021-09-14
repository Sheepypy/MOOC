#pragma once

template <typename T>
void AscendingSort(T list[], const size_t size) {

    for (int i = 0; i < size - 1; i++) {
        T min = list[i];
        int index = i;//ÿ������ĳ�ʼ��
        for (int j = i + 1; j < size; j++)
        {
            if (list[j] < min) {
                min = list[j];
                index = j;
            }
        }
        if (index != i) {//����ÿ����λ����Сֵ
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

