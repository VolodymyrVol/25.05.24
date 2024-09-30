#include <iostream>
#include <vector>
#include <set>
using namespace std;
int Sum(const vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        while (num > 0) {
            totalSum += num % 10;  
            num /= 10;             
        }
    }
    return totalSum;
}

double Task2(const vector<double>& arr) {
    double sum = 0;
    int count = 0;

    for (int num : arr) {
        if (num > 0) { 
            sum += num;
            count++;
        }
    }
    if (count == 0) {
        cout << "No pos" << endl;
        return 0.0;
    }
    return sum / count;
}


int main()
{
   /* vector<int> arr = { 12, 104, 81 };
    int result = Sum(arr);
    cout << "Sum: " << result << endl;*/

   /* vector<double> arr = { -3, 7, 12, -5, 9, 0 };
    double res = Task2(arr);
    cout << res << endl;*/

    
  /*  vector<int> arr = { 3, -1, -4, 6, -2, -8 }; 
    int max_negative = 0;  
    int position =-1;  

    for (int i = 0; i < arr.size(); i++) 
    {
        if (arr[i] < 0 && (max_negative == 0 || arr[i] > max_negative)) 
        {
            max_negative = arr[i];
            position = i;
        }
    }

    if (position != -1) {
        cout << "max negative: " << max_negative << "\n";
        cout << "position: " << position << "\n";
    }
    else {
       cout << "no negative";
    }*/

   //vector<int> arr = { 5, 9, 6, 15, 3, 7, 12, 10 }; 
   // int max_value = -1;  

   // for (int i = 1; i < arr.size(); i += 2) {
   //     if (arr[i] % 3 == 0) {  
   //         if (arr[i] > max_value) { 
   //             max_value = arr[i];
   //         }
   //     }
   // }
   // if (max_value != -1) {
   //    cout << "max: " << max_value << "\n";
   // }
   // else {
   //    cout << "no elements\n";
   // }

    vector<int> arr1 = { 1, 2, 3, 4, 5 };
    vector<int> arr2 = { 4, 5, 6, 7, 8 };

    set<int> set1(arr1.begin(), arr1.end());
    set<int> set2(arr2.begin(), arr2.end()); 

    vector<int> both;  
    vector<int> n;  


    for (int num : set1) {
        if (set2.count(num)) {
            both.push_back(num);
        }
    }

    for (int num : set1) {
        if (!set2.count(num)) {
            n.push_back(num);
        }
    }

    for (int num : set2) {
        if (!set1.count(num)) {
            n.push_back(num);
        }
    }

   cout << "in both ";
    for (int num : both) {
        cout << num << " ";
    }
    cout << "\n";

   cout << "only one ";
    for (int num : n) {
        cout << num << " ";
    }
   cout << "\n";

}