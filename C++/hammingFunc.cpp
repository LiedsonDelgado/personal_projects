#include<iostream>
using namespace std;

int H(string s1,string s2){
    int tam_s1 = s1.length();
    int tam_s2 = s2.length();
    int count = 0;

    if(tam_s1 != tam_s2){
        cout << "Erro: as strings devem ser do mesmo tamanho!\n";
        return -1;
    }

    if(tam_s1 == tam_s2){
        int n = (tam_s1+tam_s2)/2;
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i]){
                count += 1;
            }
        }
    }

    return count;
}

int main(){
    string s1,s2;

    cout << "Digite a primeira string: ";
    cin >> s1;

    cout << "Digite a segunda string: ";
    cin >> s2;

    cout << "H(" << s1 << "," << s2 << ") = " << H(s1,s2);
    return 0;
}
