#include <iostream> 
#include <time.h>
#include <iomanip>
using namespace std;


void Create(int* x, const int size, const int Low, const int High, int i)
{
    x[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(x, size, Low, High, i + 1);
}
void Print(int* x, const int size, int i)
{
    cout << setw(4) << x[i];
    if (i < size - 1)
        Print(x, size, i + 1);
    else
        cout << endl;
}
int Sum(int* x, const int size, int i) {
    if (i < size) {
        if ((x[i] < 0) && (!(x[i] % 3 == 0))) {
            int el = x[i];
            x[i] = 0;
            return el + Sum(x, size, i + 1);
        }
        else
            return Sum(x, size, i + 1);
    }
    return 0;
}

int Count(int* x, const int size, int i)
{
    if (i < size)
    {
        if ((x[i] < 0) && (!(x[i] % 3 == 0))) 
        {
            return 1 + Count(x, size, i + 1);
        }
        else
            return Count(x, size, i + 1);

    }
    return 0;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 24;
    int x[n];
    int Low = -17;
    int High = 53;

    Create(x, n, Low, High, 0);
    Print(x, n, 0);
    cout << "Sum: " << Sum(x, n, 0) << ", Count: " << Count(x, n, 0) << endl;
    Print(x, n, 0);

    return 0;
}