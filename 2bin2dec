//Pasar un numero decimal a binario.
//La representación binaria es de al menos 1 byte.
#include <iostream>
#include <algorithm>
#include <vector>
#define f(i,x,y) for (int i = x; i < y; i++)
#define vint vector<int>
#define pb push_back
using namespace std;

vint num2bin(int x){
	vint num;
	while(x){
		num.pb(x&1);
		x>>=1;
	}
	// 11 : 1011  ;  ( ultima cifra de x ) & 1
	// 5  : 0101  ; x>>=m, mueve m posiciones a la derecha
	// 2  : 0010
	// 1  : 0001

	// => 1101
	while(num.size()<8)
		num.pb(0);
	// 1101 0000
	reverse(num.begin(),num.end());
	// 0000 1011
	return num;
}

int bin2num(vint num)
{
    int n=0;
    f(i,0,num.size())
    {
        n+=(num[num.size()-i-1]<<i);
    }
    return n;
}
int main(){
	int N;
	cout<<"Ingresar el numero: ";
	cin>>N;
	vint num = num2bin(N);
	f(i,0,num.size())
		cout<<num.at(i);

    cout<<endl<<(bin2num(num));
	return 0;
}
