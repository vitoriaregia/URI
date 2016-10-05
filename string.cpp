#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main () {

	int i, cont=0, cont2=0, soma=0, soma2=0, cont3=0, soma3=0;
	string s1,s2;
	
	cin>>s1>>s2;
	
	cout<<"cpf"<<" ";
	
	for(i=0; i<s1.size(); i++){
		if(cont==11) break;
		
		else if(s1[i]>='0' && s1[i]<='9'){
			 cout<<s1[i];
			 cont++;	
			}
		cont2++;
		}
		cout<<"\n";
		
	s1.erase(s1.begin(), s1.begin()+cont2);	
	
	for(i=0; i<s1.size(); i++){
		
		soma2+=((int)s1[i])*pow(10,s1.size()-1);
		
		}
	
	for(i=0; i<s2.size(); i++){
		if(s2[i]=='.') break;
		else if (s2[i]>='0' && s2[i]<='9'){
				soma+=((int)s2[i])*pow(10,s2.size()-1);
		cont3++;
		}	
	
	}
	
	s2.erase(s2.begin(), s2.begin()+cont3);

	for(i=0; i<s2.size(); i++){
		if (s2[i]>='0' && s2[i]<='9'){
				soma3+=((int)s2[i])*pow(10,s2.size()-1);
		}
	}
		soma3*=pow(10,-1);
		
		cout<<soma3+soma+soma2<<endl;
		
			
			
	

	return 0;
}
