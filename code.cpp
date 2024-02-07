#include<iostream>

using namespace std;

//prototipi
int menu();
int inserimento(int &x);
void riga(int x, string y);
void colonna(int x, string y);
void diagonale(int x, string y);
void quadrato(int x, string y);
void triangolo(int x,string y);

int main(){

    int scelta;
    string stringa;
    int N=1;

    do{
        scelta=menu();

        switch(scelta){

        case 1:{
            inserimento(N);
            break;
        }

        case 2:{
            riga(N,stringa);
            break;
        }

        case 3:{
            colonna(N,stringa);
            break;
        }

        case 4:{
            diagonale(N,stringa);
            break;
        }

        case 5:{
            quadrato(N,stringa);
            break;
        }

        case 6:{
            triangolo(N,stringa);
            break;
        }


        case 0:{
            cout<<"Sei uscito dal programma"<<endl;
            break;
        }
        
        default:
            break;
        }

    }while(scelta!=0);

    system("pause");
    return 0;
}

int menu(){

    int scegli;

    do{
        cout<<"\t-----MENU-----"<<endl;
        cout<<"1) Inserisci il numero di asterischi"<<endl;
        cout<<"2) Visualizza la riga di asterischi"<<endl;
        cout<<"3) Visualizza una colonna di asterischi"<<endl;
        cout<<"4) Visualizza una diagonale di asterischi"<<endl;
        cout<<"5) Visualizza un quadrato di asterischi"<<endl;
        cout<<"6) Visualizza un triangolo di asterischi"<<endl;
        cout<<"0)Esci"<<endl;
        cout<<"\t ----------"<<endl;


        cout<<endl;

        cout<<"Seleziona un opzione:";
        cin>>scegli;

        if(scegli==0){
            break;
        }

    } while(scegli<0||scegli>6);

    return scegli;

}

int inserimento( int &x){

    do{
        cout<<"Quanti * inserire? (minimo 1): ";
        cin>>x;

        if(x<1){
            cout<<"Errore, inserisci almeno un asterischi"<<endl;
        }

    }while(x<1);

    return x;
}

void riga(int x, string y){

    for(int i=1; i<=x;i++){
        y=y+" * ";
    }

    cout<<y<<endl;
}

void colonna(int x, string y){

    for(int i=1; i<=x;i++){
        y=y+"\n"+" * ";
    }

    cout<<y<<endl;

}

void diagonale(int x, string y){

    string space=" ";

    cout<<"*"<<endl;

    for(int i=1; i<=x;i++){

        y=space+"*";
        space=space+" ";

        cout<<y<<endl;
    }

}

void quadrato(int x, string y){

    for(int i=1; i<=x;i++){
        y=y+" * ";
    }

    for(int i=1; i<=x;i++){
        cout<<y<<endl;
    }

}

void triangolo(int x,string y){

    for(int i=1; i<=x;i++){
        y=y+" * ";
        
        cout<<y<<endl;
    }
}
