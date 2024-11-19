#include <iostream> 
#include <cmath> 
using namespace std; 
 
int sum(int a, int b) { 
    return a + b; 
} 
 
double sum(double a, double b) { 
    return a + b; 
} 
 
string sum(string a, string b) { 
    return a + b; 
} 
 
int min(int a, int b) { 
    if(a > b) return b; 
    if(a < b) return a; 
} 
 
int& min1(int& a, int& b) { 
    if (a > b) return b; 
    else return a; 
} 
//квадрат 
double area(double a) { 
    return pow(a, 2); 
} 
 
//прямокутник 
double area(double a, double b) { 
    return a * b; 
} 
//трикутник 
double area(double a, double b, double c) { 
    double p = (a + b + c) / 2;  
    return sqrt(p * (p - a) * (p - b) * (p - c));  // Формула Герона 
} 
 
//коло 
double area1(double r) { 
    return 3.14 * pow(r, 2); 
} 
 
int swap(int a, int b) { 
    int c = a; 
    int d = b; 
    a = d; 
    b = c; 
    cout << "a = " << a << " b = " << b << endl; 
} 
 
void swap(int &a, int &b) { 
    int temp = a; 
    a = b; 
    b = temp; 
} 
 
int factorial(int n) { 
    if(n == 0) { 
        return 1; 
    } else { 
        return n * factorial(n - 1); 
    } 
} 
 
//paint  
int paint(int h) { 
    for (int i = 1; i <= h; i++) { 
        for (int j = 1; j <= h; j++) { 
            cout << "*"; 
        } 
        cout << endl;   
    } 
} 
 
void all() { 
    cout << sum(1, 1) << endl; 
    cout << sum(1.1, 1.4) << endl; 
    cout << sum("hello", " world") << endl; 
    cout << min(4, 8) << endl; 
    /*cout << min1(1, 1) << endl;*/ 
    cout << area(3) << endl; 
    cout << area(7, 2) << endl; 
    cout << area(4, 5, 6) << endl; 
    cout << area1(7) << endl; 
    cout << factorial(5) << endl; 
    cout << paint(3) << endl; 
} 
 
int main() { 
    all();   
    return 0; 
}
