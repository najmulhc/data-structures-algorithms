#include<iostream>
using namespace std;

int main(){
    int total ;
    cin >> total ;
    int notes[9] = {
        500, 200, 100, 50, 20, 10, 5, 2, 1
    };
    int i = 0;
    while (total > 0)
    {
        switch (total / notes[i])
        {
        case 0 :
            cout << "You do not need any " << notes[i] << "Taka notes." << endl;
            break;
        
        default:
        cout << "You need " << total/notes[i] << " notes of " << notes[i] << " taka." << endl;
            break;
        }
        if(total >= notes[i] ) {
            total %= notes[i] ;
          
        }
        i++;
    }
    
    
    return 0;
}