# include <iostream>
using namespace std;

int Fibonacci(int ans){
    if (ans == 1) && (ans == 2){
        return 1
    }
    else
    {
        return Fibonacci(ans - 1) + Fibonacci(ans -2);
    }
    
}

int main{
    int a;
    cout << "Fibonacci series";
    cin >> a;
    cout<<Fibonacci(a);
}