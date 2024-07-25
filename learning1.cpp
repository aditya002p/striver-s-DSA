// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     cout << "value of x: " << x << " and y: " << y;
//     return 0;
// }

// this will print only the values before space
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      string s;
//      cin >> s;
//      cout << s;
//      return 0;
//  }

// this will print values for whole

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str1, str2;
//     cin >> str1 >> str2;
//     cout << str1 << " " << str2;
//     return 0;
// }

// we cana also print the values of string using "getline" function
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin, str);
//     cout << str;
//     return 0;
// }

//--------------------if else statement------------------

// #include <bits/stdc++.h>
// using namespace std;
// write a program that take an input of age
// and print if you are adult or not
// int main()
// {
//     double x;
//     cin >> x;
//     if (x >= 18)
//     {
//         cout << "you are adult" << endl;
//     }
//     else
//     {
//         cout << "you are not an adult";
//     }
//     return 0;
// }

/*
A school has following rules for grading systems:
a. Below 25- F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the correspoding grdes
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double marks;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "Your grade is F" << endl;
//     }
//     else if (marks <= 44)
//     {
//         cout << "Your grade is E" << endl;
//     }
//     else if (marks <= 49)
//     {
//         cout << "Your grade is D" << endl;
//     }
//     else if (marks <= 59)
//     {
//         cout << "Your grade is C" << endl;
//     }
//     else if (marks <= 79)
//     {
//         cout << "Your grade is B" << endl;
//     }
//     else if (marks <= 100)
//     {
//         cout << "Your grade is A" << endl;
//     }
//     else
//     {
//         cout << "Invalid marks" << endl;
//     }
//     return 0;
// }

//-------------nested if else------------------

/*
Take the age from the user and then decide accordingly.
1. If age <18,
    print->not eligible for job
2. If age >=18
   print ->"eligible for job"
3. If age>=55
   print->"eligible for job but retirement soon."
4. If age>57
   print->"retirement time"
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age;
//     cin >> age;
//     if (age < 18)
//     {
//         cout << "not eligible for job";
//     }
//     else if (age <= 57)
//     {
//         cout << "eligible for job";
//         if (age >= 55)
//         {
//             cout << ", but retirement soon.";
//         }
//     }
//     else
//     {
//         cout << "retirement time";
//     }
//     return 0;
// }

//-------------switch statements------------------

/*
Write a program that takes an input of day no.
and prints the corresponding day of the week
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int day;
//     cin >> day;
//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Invalid day number";
//     }
//     return 0;
// }

// -----------basics of array-------------------

//--------------1D Array------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int arr[5];
//    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//    cout << arr[3] << endl;
//    arr[3] = 16;
//    cout << arr[4] << endl;
//    cout << arr[3];
//    return 0;
// }

//---------------2D Array------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int arr[3][3];
//    arr[3][3] = 76;
//    cout << arr[3][3];
//    return 0;
// }

//------------strings---------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    string str = "Aditya Kumar Pathak";
//    cout << str << endl;
//    str[0] = 'H';
//    cout << str << endl;
//    return 0;
// }

//--------------for loop----------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// this is the normal way
// for (int i = 1; i <= 10; i++)
// {
//    cout << "Aditya" << endl;
// }

// this is the reverse order
//    for (int i = 5; i > 0; i--)
//    {
//       cout << "Aditya" << i << endl;
//    }
//    return 0;
// }

//----------------while loop---------------
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int i = 1;
//    while (i <= 5)
//    {
//       cout << "Aditya" << i << endl;
//       i++;
//    }
//    return 0;
// }

// -----------DoWhile Loop--------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int i = 2;
//    do
//    {
//       cout << "Aditya" << i << endl;
//       i++;
//    } while (i <= 1);
//    return 0;
// }

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

//-------------same question using void-------------

// #include <bits/stdc++.h>
// using namespace std;

// void sum(int num1, int num2)
// {
//    int num3 = num1 + num2;
//    cout << num3;
// }
// int main()
// {
//    int num1, num2;
//    cin >> num1 >> num2;
//    sum(num1, num2);
//    return 0;
// }

//-------------maths function as min and max-----------

// minimum

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int num1, num2;
//    cin >> num1 >> num2;
//    int minimum = min(num1, num2);
//    cout << minimum;
//    return 0;
// }

// maximum

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int num1, num2;
//    cin >> num1 >> num2;
//    int maximum = max(num1, num2);
//    cout << maximum;
//    return 0;
// }

// // Now write this code using function

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

// Pass by refrence

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

// ----------Pattern questions------------------

#include <bits/stdc++.h>
using namespace std;

// Pattern 1

// void pattern1(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < n; j++)
//       {
//          cout << "* ";
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern1(n);
//    return 0;
// }

// Pattern 2
// #include <bits/stdc++.h>
// using namespace std;

// void pattern2(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j <= i; j++)
//       {
//          cout << "*";
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern2(n);
//    return 0;
// }

// Pattern 3
// #include <bits/stdc++.h>
// using namespace std;

// void pattern3(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          cout << j;
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern3(n);
//    return 0;
// }

// Pattern 4
#include <bits/stdc++.h>
using namespace std;

void pattern4(int n)
{
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         cout << i;
      }
      cout << endl;
   }
}
int main()
{
   int n;
   cin >> n;
   pattern4(n);
   return 0;
}