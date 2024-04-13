#include <iostream>
#include <vector>
#include<cassert>

std::vector<int> arr1 = { 9, 5, 1, 6, 8, 3, 4, 7, 2 };
std::vector<int> arr2 = { 7,3,10,-2 };
std::vector<int> arr3 = { 0,0,0,0,0 };
std::vector<int> arr4 = { -2, -44,-12,88,2 };
std::vector<int> arr5 = { 1,2,3,4,5 };
std::vector<int> arr6 = { 1 };
std::vector<int> arr7 = { };

void shellSort(std::vector<int>& arr) {
    int n = arr.size();
    int gap = n / 2;

    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap) {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
        gap /= 2;
    }
}

void ShowVector(std::vector<int>& arr){
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void TestSortArr1() {
    std::vector<int> arr = { 1,2,3,4,5,6,7,8,9 };
    assert(arr1 == arr);
    
    arr = { 0,0,0,0,0 };
    assert(arr3 == arr);

    std::cout << "Test is succesfull" << std::endl;
}

void TestSortArr2() {
    std::vector<int> arr = { -2,3,7,10 };
    assert(arr2 == arr);
    std::cout << "Test is succesfull" << std::endl;
}

void TestSortArr3() {
    std::vector<int> arr = {0,0,0,0,0};
    assert(arr3 == arr);
    std::cout << "Test is succesfull" << std::endl;
}

void TestSortArr4() {
    std::vector<int> arr = {-44,-12,-2,2,88};
    assert(arr4 == arr);
    std::cout << "Test is succesfull" << std::endl;
}

void TestSortArr5() {
    std::vector<int> arr = { 1,2,3,4,5 };
    assert(arr5 == arr);
    std::cout << "Test is succesfull" << std::endl;
}

void TestSortArr6() {
    std::vector<int> arr = { 1 };
    assert(arr6 == arr);
    std::cout << "Test is succesfull" << std::endl;
}

void TestSortArr7() {
    std::vector<int> arr = {  };
    assert(arr7 == arr);
    std::cout << "Test is succesfull" << std::endl;
}

int main() {
    

    shellSort(arr1);
    ShowVector(arr1);

    shellSort(arr2);
    ShowVector(arr2);

    shellSort(arr3);
    ShowVector(arr3);

    shellSort(arr4);
    ShowVector(arr4);

    shellSort(arr5);
    ShowVector(arr5);

    shellSort(arr6);
    ShowVector(arr6);

    shellSort(arr7);
    ShowVector(arr7);

    TestSortArr1();
    TestSortArr2();
    TestSortArr3();
    TestSortArr4();
    TestSortArr5();
    TestSortArr6();
    TestSortArr7();

    return 0;
}