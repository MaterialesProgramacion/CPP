/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

#include<iostream>
// #include<conio.h>
#include<string.h>


using namespace std;

int main (){
	char cadenaA[100], cadenaB[100], interseccion[100], unionn[100], AmenosB[100], AmenosB[100], complementoA[100], complementoB[100];
	char abecedario[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVW";
	int x, y, cont;
    int w=0, r=0,  u=0, s=0, t=0;
	
    cout<<"Conjunto A \n\n";
	cin.getline(cadenaA,100,'\n');
	
    cout<<"Conjnto B: \n\n";
	cin.getline(cadenaB,100,'\n');
	
    x=strlen(cadenaA);
	y=strlen(cadenaB);
	
    
    
    /*
     * El siguiente código demuestra la unión entre dos cadenas
     */
    unionn[0]=cadenaA[0];
	w=1;
	
    for(int i=1; i<x; i++){
		s=0;
		
        for(int j=0; j<w; j++){
			if(cadenaA[i]==union[j]){
				s++;
			}
		}
		
        if(s==0){
			unionn[w]=cadenaA[i];
			w++;
		}
	}
	
    for(int i=0; i<y; i++){
		s=0;
		
        for(int l=0; l<w; l++){
			if(cadenaB[i]==union[l]){
				s++;
			}
		}
		
        if(s==0){
			unionn[w]=cadenaB[i];
			w++;
		}
	}
	cout<<"Unionon de los conjutos A y B: "<<unionn<<"\n\n\n";
    
    
    
    /*
     * El siguiente código demuestra la intersección entre dos cadenas
     */

    for(int i=0; i<x; i++){
		s=0;
		
        for(int j=0; j<i; j++){
			if(cadenaA[j]==cadenaA[i]){
				s++;
			}
		}
		
        if(s==0){
			t=0;
		    
            for(int k=0; k<y; k++){
		    	if(cadenaA[i]==cadenaB[k]){
		    		t++;
		    	}
		    }
	        
            if(t>0){
	        	r++;
		    	interseccion[r-1]=cadenaA[i];
	       }
      	}
	}
	cout<<"Interseccion de los cojuntos A y B es: "<<interseccion<<"\n\n\n";
	
	
	
	
	/*
     * El siguiente código demuestra la resta que se le hace al conjunto A con respecto al conjunto B
     */
	for(int i=0; i<x; i++){
		s=0;
		
        for(int j=0; j<y; j++){
			if(cadenaA[i]==cadenaB[j]){
				s++;
			}
		}
		
        if(s==0){
			AmenosB[u]=cadenaA[i];
			u++;
      	}
	}
	cout<<"A - B es: "<<AmenosB<<"\n\n\n";
	
	/*
     * El siguiente código demuestra la resta que se le hace al conjunto B con respecto al conjunto A
     */
	u=0;
	for(int i=0; i<y; i++){
		s=0;
		
        for(int j=0; j<x; j++){
			if(cadenaB[i]==cadenaA[j]){
				s++;
			}
		}
		
        if(s==0){
			AmenosB[u]=cadenaB[i];
			u++;
      	}
	}
	cout<<"B - A es: "<<BmenosA<<"\n\n\n";
	
	
    
    /*
     * El siguiente código demuestra el complemento del conjunto A
     */
	u=0;
	for(int i=0; i<26; i++){
		s=0;
		
        for(int j=0; j<x; j++){
			if(cadenaA[j]==abecedario[i]){
				s++;
			}
		}
		
        if(s==0){
			complementoA[u]=abecedario[i];
			u++;
      	}
	}
	cout<<"A complemento: "<<complementoA<<"\n\n\n";
	
	

	/*
     * El siguiente código demuestra el complemento del conjunto B
     */
    u=0;
	
    for(int i=0; i<26; i++){
		s=0;
		
        for(int j=0; j<y; j++){
			if(cadenaA[j]==abecedario[i]){
				s++;
			}
		}
		
        if(s==0){
			complementoB[u]=abecedario[i];
			u++;
      	}
	}
	
    cout<<"B complemento: "<<complementoB<<"\n\n\n";
	
    return 0;
}
