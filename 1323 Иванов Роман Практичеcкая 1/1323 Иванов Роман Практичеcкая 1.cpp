#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Задание 1" << endl;

    cout << "Тип данных int = " << sizeof(int) << endl;
    cout << "Тип данных short int = " << sizeof(short int) << endl;
    cout << "Тип данных long int = " << sizeof(long long int) << endl;
    cout << "Тип данных float = " << sizeof(float) << endl;
    cout << "Тип данных double = " << sizeof(double) << endl;
    cout << "Тип данных long double = " << sizeof(long double) << endl;
    cout << "Тип данных char = " << sizeof(char) << endl;
    cout << "Тип данных bool = " << sizeof(bool) << endl;

    cout << endl;



    cout << "Задание 2" << endl << "Значение int = ";

    int value;
    cin >> value;
    unsigned int order = sizeof(int) * 8; 
    unsigned int mask = 1 << order - 1;
    for (int i = 1; i <= order; i++)         

    {
        putchar(value & mask ? '1' : '0');        
        value <<= 1;                              
        if (i % 8 == 0)              
        {
            putchar(' ');             
        }
        if (i % order - 1 == 0)      
        {
            putchar(' ');
        }
    }

    cout << endl << endl;


    cout << "Задание 3" << endl << "Значение float = ";

    union                
    {
        float fl = 3.14;
        int f;
    };
    cin >> fl;
    mask = 1 << order - 1; 
    for (int i = 1; i <= order; i++)
    {
        putchar(f & mask ? '1' : '0');
        f <<= 1;
        if (i % 8 == 0)
        {
            putchar(' ');
        }
        if (i % order - 1 == 0)
        {
            putchar(' ');
        }
    }

    cout << endl << endl;


    cout << "Задание 4" << endl << "Значение double = ";

    union              
    {
        double dou;
        int d[2];
    };
    cin >> dou;

    for (int l = 1; l >= 0; l--)                     
    {
        mask = 1 << order - 1;   
        for (int i = 1; i <= order; i++)               
        {
            putchar(d[l] & mask ? '1' : '0');     
            mask >>= 1;

            if (l == 1 && i == 1)
            {
                putchar(' ');
            }
            if (l == 1 && i == 12)          
            {
                putchar(' ');
            }
        }
    }

    cout << endl;

    return 0;
}
