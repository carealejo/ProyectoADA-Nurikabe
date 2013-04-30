#include "tablero.h"

tablero::tablero()
{

}

void tablero::gentablero(string s){
    file.open(s.c_str());
    int n,m,n2,m2;
    cout << "bandera" << endl;
    file >> n;
    file >> m;
    for(int i;i<n;i++){
        vector<int> v;
      for(int j;j<m;j++){
            v.push_back(-2);
        }
        M.push_back(v);
    }
    cout << "bandera1" << endl;
    while(!file.eof()){
        int num;
        file >> num;
        file >> n2;
        file >> m2;
        M[n2][m2]=num;
        cout << "banderainterna" << endl;
    }
    cout << "bandera2" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << M[n][m];
        }
        cout << endl;
    }
    cout << "bandera3" << endl;
}
