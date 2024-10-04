
// ----------Pattern questions------------------

// #include <bits/stdc++.h>
// using namespace std;

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
// #include <bits/stdc++.h>
// using namespace std;

// void pattern4(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          cout << i;
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern4(n);
//    return 0;
// }

// Pattern 5

// #include <bits/stdc++.h>
// using namespace std;

// void pattern5(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          cout << i;
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern5(n);
//    return 0;
// }

// pattern 7
// #include <bits/stdc++.h>
// using namespace std;

// void pattern7(int n)
// {

// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     // star
//     for (int j = 0; j < 2 * i + 1; j++)
//     {
//         cout << "*";
//     }
//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern7(n);
//     return 0;
// }

// pattern 8
// #include <bits/stdc++.h>
// using namespace std;

// void pattern8(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern8(n);
//     return 0;
// }

// pattern 9
// #include <bits/stdc++.h>
// using namespace std;
// void pattern7(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// void pattern8(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern7(n);
//     pattern8(n);
//     return 0;
// }

// pattern 10

// #include <bits/stdc++.h>
// using namespace std;

// void pattern10(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          cout << "*";
//       }
//       cout << endl;
//    }
//    for (int i = n - 1; i >= 1; i--)
//    {
//       for (int j = 1; j <= i; j++)
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
//    pattern10(n);
//    return 0;
// }

// pattern 10 (new way)

// #include <bits/stdc++.h>
// using namespace std;

// void pattern10(int n)
// {
//    for (int i = 1; i <= 2 * n - 1; i++)
//    {
//       int stars = i;
//       if (i > n)
//          stars = 2 * n - i;
//       for (int j = 1; j <= stars; j++)
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
//    pattern10(n);
//    return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void pattern11(int n)
// {
//    int start = 1;
//    for (int i = 0; i < n; i++)
//    {
//       if (i % 2 == 0)
//          start = 1;
//       for (int j = 0; j <= i; j++)
//       {
//          cout << start;
//          start = 1 - start;
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern11(n);
//    return 0;
// }

// pattern 12

// #include <bits/stdc++.h>
// using namespace std;

// void pattern12(int n)
// {
//    int spaces = 2 * (n - 1);
//    for (int i = 1; i <= n; i++)
//    {
//       // numbers
//       for (int j = 1; j <= i; j++)
//       {
//          cout << j;
//       }
//       // spaces
//       for (int j = 1; j <= spaces; j++)
//       {
//          cout << " ";
//       }
//       // numbers in reverse order
//       for (int j = i; j >= 1; j--)
//       {
//          cout << j;
//       }
//       cout << endl;
//       spaces -= 2;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern12(n);
//    return 0;
// }

// pattern 13

// #include <bits/stdc++.h>
// using namespace std;

// void pattern13(int n)
// {
//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern13(n);
//     return 0;
// }

// Pattern14

// #include <bits/stdc++.h>
// using namespace std;

// void pattern14(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern14(n);
//     return 0;
// }

// Pattern 15
// #include <bits/stdc++.h>
// using namespace std;

// void pyramid(int n)
// {
//     // Upper part of the pyramid
//     for (int i = n; i >= 1; i--)
//     {
//         string str(n - i, ' ');
//         string str2(i * 2 - 1, '*');
//         cout << str << str2 << str << endl;
//     }
//     // Lower part of the pyramid
//     for (int i = 2; i <= n; i++)
//     {
//         string str(n - i, ' ');
//         string str2(i * 2 - 1, '*');
//         cout << str << str2 << str << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pyramid(n);
//     return 0;
// }

// More ways of doing pattern 15

// #include <bits/stdc++.h>
// using namespace std;

// void pyramid(int n)
// {
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 0; j < n - i; j++)
//             cout << " ";
//         for (int j = 0; j < 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//             cout << " ";
//         for (int j = 0; j < 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pyramid(n);
//     return 0;
// }

// pattern 17
// #include <bits/stdc++.h>
// using namespace std;

// void pattern17(int n)
// {
//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern17(n);
//     return 0;
// }

// Pattern 18
// #include <bits/stdc++.h>
// using namespace std;

// void pattern18(int n)
// {
//     for (int i = n; i >= 0; i--)
//     {
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern18(n);
//     return 0;
// }

// Pattern 19
// #include <bits/stdc++.h>
// using namespace std;

// void pattern19(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         char ch = 'A' + i;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern19(n);
//     return 0;
// }

// Pattern 20
// #include <bits/stdc++.h>
// using namespace std;

// void pattern20(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // characters
//         char ch = 'A';
//         int breakpoint = (2 * i + 1) / 2;
//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ch;
//             if (j <= breakpoint)
//                 ch++;
//             else
//                 ch--;
//         }
//         // space
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern20(n);
//     return 0;
// }

// Pattern 21
// #include <bits/stdc++.h>
// using namespace std;

// void pattern21(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'E' - i; ch <= 'E'; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern21(n);
//     return 0;
// }

// Pattern 22
// #include <bits/stdc++.h>
// using namespace std;

// void pattern22(int n)
// {
//     int spaces = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // star
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < spaces; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         spaces += 2;
//         cout << endl;
//     }
//     spaces = 2 * n - 2;
//     for (int i = 1; i <= n; i++)
//     {
//         // star
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < spaces; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         spaces -= 2;
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern22(n);
//     return 0;
// }

// Pattern 23
// #include <bits/stdc++.h>
// using namespace std;

// void pattern23(int n)
// {
//     int space = 2 * n - 2;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int star = i;
//         if (i > n)
//             star = 2 * n - i;
//         // star
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         if (i < n)
//             space -= 2;
//         else
//             space += 2;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     pattern23(n);
//     return 0;
// }

// Pattern 24
// #include <bits/stdc++.h>
// using namespace std;

// void pattern24(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//             {
//                 cout << "*";
//             }
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern24(n);
//     return 0;
// }

// Pattern 25
// #include <bits/stdc++.h>
// using namespace std;

// void pattern25(int n)
// {
//     for (int i = 0; i < 2 * n - 1; i++)
//     {
//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             int top = i;
//             int left = j;
//             int right = (2 * n - 2) - j;
//             int bottom = (2 * n - 2) - i;
//             cout << (n - min(min(top, bottom), min(left, right)));
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern25(n);
//     return 0;
// }