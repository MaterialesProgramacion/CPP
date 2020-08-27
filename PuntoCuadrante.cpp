/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
Algoritmo en C++ que tome como entrada un punto a que pertenece a los números reales y despliega en pantalla a qué cuadrante pertenece el punto (1,2,3,4) o si está ubicado sobre algún eje coordenado (x,y) o si ese punto es el origen(origen).
*/

#include<iostream>

using namespace std;

int main(){
    float x=0, y=0;
    cin>>x;
    cin>>y;
    if(x>0 && y>0){
        cout<<"1"<<endl;
    }else{
        if(x<0 && y>0){ 
            cout<<"2"<<endl;
        }else{
            if(x<0 && y<0){
                cout<<"3"<<endl;
            }else{
                if(x>0 && y<0){
                    cout<<"4"<<endl;
                }else{
                    if(x>0 && y==0){
                        cout<<"X"<<endl;
                    }else{
                        if(x<0 && y==0){
                            cout<<"-X"<<endl;
                        }else{
                            if(x==0 && y<0){
                                cout<<"-Y"<<endl;
                            }else{
                                if(x==0 && y>0){
                                    cout<<"X"<<endl;
                                }else{
                                    cout<<"Origen"<<endl;
                                }
                            }
                        }
                    }
                }
            }
        } 
    }    
    return 0;
}