#include <iostream>
#include <vector>
using namespace std;
string S;
int A[100];
int N;
vector <char> M;

void imprimir()
{
	for(int i=0;i<N;i++)
		cout<<M.at(i);
}

void permutar(int i){
	if(A[i] == 1)
	{
		for(int j=0;j<N;j++)
		{
			if(j!=i && A[j] == 0)
			{
				A[j] = 1;
				M.push_back(S[j]);
				permutar(j);
				A[j] = 0;
				M.pop_back();
				
			} 
		}	
		if(M.size()==N)
		{
			cout<<endl;
			imprimir();
		}	
		
	}
	
}
int main()
{
	cin>>S;
	N = S.size();
	A[N] = 1;
	permutar(N);
	cout<<endl;
	return 0;
}
