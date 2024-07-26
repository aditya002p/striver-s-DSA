
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

//    for (int i = 0; i < n; i++)
//    {
//       // space
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       // star
//       for (int j = 0; j < 2 * i + 1; j++)
//       {
//          cout << "*";
//       }
//       // space
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern7(n);
//    return 0;
// }

// pattern 8
// #include <bits/stdc++.h>
// using namespace std;

// void pattern8(int n)
// {

//    for (int i = 0; i < n; i++)
//    {
//       // space
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       // star
//       for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//       {
//          cout << "*";
//       }
//       // space
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern8(n);
//    return 0;
// }

// pattern 9
// #include <bits/stdc++.h>
// using namespace std;
// void pattern7(int n)
// {

//    for (int i = 0; i < n; i++)
//    {
//       // space
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       // star
//       for (int j = 0; j < 2 * i + 1; j++)
//       {
//          cout << "*";
//       }
//       // space
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }
// void pattern8(int n)
// {

//    for (int i = 0; i < n; i++)
//    {
//       // space
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       // star
//       for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//       {
//          cout << "*";
//       }
//       // space
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    pattern7(n);
//    pattern8(n);
//    return 0;
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