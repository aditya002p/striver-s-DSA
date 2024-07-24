
//  ---------------functions------------------------

// Non- Parameterised functions

// #include <bits/stdc++.h>
// using namespace std;

// void PrintName()
// {
//    cout << "Aditya";
// }
// int main()
// {
//    PrintName();
// }

// Parameterised functions

// #include <bits/stdc++.h>
// using namespace std;

// void PrintName(string name)
// {
//    cout << "Hello " << name << endl;
// }

// int main()
// {
//    string name;
//    cin >> name;
//    PrintName(name);

//    string name2;
//    cin >> name2;
//    PrintName(name2);
// }

// ----------Take two numbers and print its sum------

// #include <bits/stdc++.h>
// using namespace std;

// int sum(int num1, int num2)
// {
//    int num3 = num1 + num2;
//    return num3;
// }
// int main()
// {
//    int num1, num2;
//    cin >> num1 >> num2;
//    int res = sum(num1, num2);
//    cout << res;
//    return 0;
// }

// Now write this code using function

// #include <bits/stdc++.h>
// using namespace std;

// int maxx(int num1, int num2)
// {
//    if (num1 > num2)
//       return num1;
//    else
//       return num2;
// }
// int minn(int num1, int num2)
// {
//    if (num1 < num2)
//       return num1;
//    else
//       return num2;
// }

// int main()
// {
//    int num1, num2;
//    cin >> num1 >> num2;
//    int maxi = maxx(num1, num2);
//    cout << maxi << endl;
//    int mini = minn(num1, num2);
//    cout << mini;
//    return 0;
// }

// Pass by value

// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(int num)
// {
//    cout << num << endl;
//    num += 5;
//    cout << num << endl;
//    num += 5;
//    cout << num << endl;
//    num += 10;
//    cout << num << endl;
// }

// int main()
// {
//    int num = 10;
//    doSomething(num);
//    cout << num << endl;
//    return 0;
// }

// Pass by refrence in Array

// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(int arr[], int n)
// {
//    arr[1] += 100;
//    cout << "value inside function : " << arr[1] << endl;
// }

// int main()
// {
//    int n = 5;
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//       cin >> arr[i];
//    }
//    doSomething(arr, n);
//    cout << "value inside main : " << arr[1] << endl;
//    return 0;
// }