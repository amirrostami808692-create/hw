#include <iostream>
#include <cmath>

using namespace std;


void calc_arr(float arr[], int n, float &jam, float &menha, float &zarb) 
{

}



void hal_yek(float a, float b) 
{

}

    


void hal_do(float a, float b, float c) 
{

}

  


long bmm(long a, long b) 
{

}
   

long kmm(long a, long b) 
{

}
    


long tarkib(int n, int k) 
{

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