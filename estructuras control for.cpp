#include <iostream>
using namespace std;
main (){

  //{++,{+=1, {={+1
  for(int i=1;i<=10;i++){// 0 hasta 9
  cout<<i<<endl;
  
  int datos[5]={10,40,100,250,3000};
  for(int i=0;i<5;i++){
  	cout<<datos[i]<<endl;
  	
  	int tabla = 0,res=0;
  	cout<<"ingrese tabla:";
  	cin>>tabla;
  	for (int i=1;i<=10;i++){
  		res=tabla=i;
  		cout<<tabla<<"x"<<i<<"="<<res<<endl;
  		
		  }
	  
  }
  
  
  }
  
  
}