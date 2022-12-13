#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string t1 , t2 , t3 , t4 ;
    cout << "Input text: " ;
	cin >> t1 ;
	func1(t1) ;
	t2 = func2(t1);
	t3 = func1(t1);
	t4 = func1(t2) ;
	cout << "Reversed text: " << t3 << "\n";
	if (t2 == t4)
	{
		cout << "Palindrome: Yes" ;
	} else {
		cout << "Palindrome: No " ;
	}
    return 0;
}
