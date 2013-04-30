#include "tablero.h"

tablero::tablero()
{

}

void tablero::gentablero(string s){
    file.open(s.c_str());
    int n2,m2;
    file >> n;
    file >> m;
    for(int i=0;i<n;i++){
        vector<int> v;
      for(int j=0;j<m;j++){
             v.push_back(-2);
        }
      M.push_back(v);
    }
    int num;
    file >> num;
    file >> n2;
    file >> m2;
    while(!file.eof()){
        vector<int> v=M.at(n2-1);
        v.at(m2-1)=num;
        M.at(n2-1)=v;
        file >> num;
        file >> n2;
        file >> m2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout <<  M[i][j] << " ";
        }
        cout << endl;
    }
}
