//
//  main.cpp
//  Homework №16
//
//  Created by Дмитрий Сергеевич on 08.09.2023.
//
#include <iostream>
//task1
double mean(double num1, double num2){
    return (num1 + num2) / 2;
}
//task 2
double mean_arr(int arr[], const int length){
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return double (sum) / length;
}
//task3

void power(int n, int m){
    if(m == 0)
        std::cout << "1";
    
    int res = 1;
    for (int i = 0; i <=m; i++){
        res = pow(n,i);
        std::cout << n << " в степени " << i << " = " << res << std::endl;
    }
}

//task 4
void positive_arr(int arr[], const int length){
    for (int i = 0; i < length; i++){
        if (arr[i] < 0)
            arr[i] = -arr[i];
        std::cout << arr[i] << ' ';
    }
}


int main(int argc, const char * argv[]) {
    setlocale (LC_ALL, "RU");
    
    //task1
    
    int a, b;
    std::cout << "Введите 2 числа -> ";
    std::cin >> a >> b;

    std::cout << "Cреднее арифметическое: " << mean(a,b) << std::endl;
    

    //task2
    
    int arr[] {1, 5, 2, 7, 18};
    const int length = 5;
    
    std::cout << "Среднее арифметическое массива: " << mean_arr(arr,length) <<std::endl;
    
    
    //task3
    
    int n, m;
    std::cout << "Введите N ->";
    std::cin >> n;
    std::cout << "Введите M ->";
    std::cin >> m;
    power(n, m);
    
    //task4
    int my_arr[]{-2, 23, 34, -13, -29, 123};
    const int my_length = 6;
    positive_arr(arr,length);
    
    
    
    
    
    
    
    
    
    
    return 0;
}

