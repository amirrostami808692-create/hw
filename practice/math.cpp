#include <iostream>
#include <cmath>

using namespace std;


void calc_arr(float arr[], int n, float &jam, float &menha, float &zarb) 
{
    jam = 0;
    zarb = 1;
    menha = arr[0];
   
    for(int i=0; i<n; i++) {
        jam += arr[i];
        zarb *= arr[i];
        if(i != 0) {
            menha -= arr[i];
        }
    }

}



void hal_yek(float a, float b) 
{
     if(a == 0) {
        cout << "Javab nadarad" << endl;
    } else {
        cout << "X = " << -b/a << endl;
    }

}

    


void hal_do(float a, float b, float c) 
{

    float delta = (b*b) - (4*a*c);
   
    if(a == 0) {
        // Age a 0 bashe mishe daraje 1
        hal_yek(b, c);
    }
    else if(delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        cout << "X1 = " << x1 << "\nX2 = " << x2 << endl;
    }
    else if(delta == 0) {
        cout << "X = " << -b / (2*a) << endl;
    }
    else {
        cout << "Rishe haghighi nadarad" << endl;
    }
}

  


long bmm(long a, long b) 
{
    if(b == 0) return a;
    return bmm(b, a % b);

}
   

long kmm(long a, long b) 
{
    return (a * b) / bmm(a, b);
}
    


long tarkib(int n, int k) 
{
    
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n / 2) k = n - k;
   
    long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;

}
   

int main() {
    int entekhab;
   
    cout << "1. Amaliat Arraye\n";
    cout << "2. Moadele\n";
    cout << "3. BMM/KMM va Tarkib\n";

    cout << "Adad ra vared konid: ";
    
    cin >> entekhab;
   
    
    if(entekhab == 1) {
        int n;
        float num[100]; 
        float sum, menha, zarb; 
       
        cout << "Tedad adad: ";
        cin >> n;
       
        for(int i=0; i<n; i++) {
            cout << "Adad " << i+1 << ": ";
            cin >> num[i];
        }
       
        calc_arr(num, n, sum, menha, zarb);
       
        cout << "Jam: " << sum << endl;
        cout << "Tafrigh: " << menha << endl;
        cout << "zarb: " << zarb << endl;
    }
   
    
    else if(entekhab == 2) {
        int type;
        cout << "Daraje (1 ya 2): ";
        cin >> type;
       
        if(type == 1) {
            float a, b;
            cout << "a, b ra vared konid: ";
            cin >> a >> b;
            hal_yek(a, b);
        }
        else {
            float a, b, c;
            cout << "a, b, c ra vared konid: ";
            cin >> a >> b >> c;
            hal_do(a, b, c);
        }
    }
   
    
    else if(entekhab == 3) {
        int op;
        cout << "1. BMM va KMM\n2. Tarkib\nEntekhab: ";
        cin >> op;
       
        if(op == 1) {
            long x, y;
            cout << "2 adad bedahid: ";
            cin >> x >> y;
            cout << "BMM: " << bmm(x, y) << endl;
            cout << "KMM: " << kmm(x, y) << endl;
        }
        else {
            int n, k;
            cout << "n va k: ";
            cin >> n >> k;
            cout << "Javab: " << tarkib(n, k) << endl;
        }
    }
   
    return 0;
}