#include <iostream>
using namespace std;
int main()
{

    cout << "Pattern (15 -- 19) IMP Questions" << endl;
    // 15. Palindromic pattern

    // 1ST Method defined by me:)
    int n;
    cout<<"Enter the number \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int space = n-i;
        for (int j = 1; j <= space; j++)
        {
            cout << "   ";
        }
        int k=i;
        for (int j=1; j <= i; j++)
        {
            cout << k--<< "  ";
        }
        k = 2;
        for (int j=1; j<=i-1; j++)
        {
            cout << k++ << "  ";
        }

        cout << endl;
    }

    // 2nd Method by Youtube is bit complex
    //  int i, j, r;
    //  cin >> r;
    //  for (i = 1; i <= r; i++)
    //  {
    //      int k = i;
    //      for (j = 1; j <= (r - i); j++)
    //      {
    //          cout << "  ";
    //      }
    //      for (; j <= r; j++)
    //      {
    //          cout << k << "  ";
    //          k--;
    //      }
    //      k = 1;
    //      for (; j < (r + i); j++)
    //      {
    //          k++;
    //          cout << k << "  ";
    //      }
    //      for (; j <= (2 * r - 1); j++)
    //      {
    //          cout << "  ";
    //      }
    //      cout << endl;
    //  }

    // Random Practice Program just
    // int i=2;
    // cout << "Output Number" << endl;
    // int sum = i++ + ++i;
    // cout << sum << endl;

    // 16. Print Solid Diamond using Stars

    // int n;
    // cout << "Enter Number: \n";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 17. Print Hollow Diamond using Stars
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j == 1 || j == 2 * i - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j == 1 || j == 2 * i - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 18. Print Hollow Diamond Inscribed in a Rectangle
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j == 1 || j == 2 * i - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //      for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j == 1 || j == 2 * i - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //      for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 19. Zig-Zag Pattern

    // int n;
    // cout << "Enter the number: \n";
    // cin >> n;
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)))
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    return 0;
}