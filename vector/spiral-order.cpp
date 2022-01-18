#include<iostream>
#include<vector>

using namespace std;
vector<int> spiralOrder(vector<vector <int>>& matrix) {
    vector <int> ans;
    
    if(matrix.size() == 0) {return ans;};
    int rows = matrix.size();
    int cols = matrix[0].size();

    int sr = 0,er = rows-1,sc =0,ec=cols-1;
    while(sr <= er && sc <= ec){

        for(int i=sc;i<=ec;i++){   
            ans.push_back(matrix[sr][i]);
        }
        sr++;
        for(int i=sr;i<=er;i++){
            ans.push_back(matrix[i][ec]);
        }
        ec--;
        for(int i=ec;i>=sc;i--){
            ans.push_back(matrix[er][i]);
        }
        er--;
        for(int i=er;i>=sr;i--){
            ans.push_back(matrix[i][sc]);

        }
        sc++;
    }

    return ans;
}

int main(){

    vector<vector <int>> v = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}

    }; 

    vector<int> aaa = spiralOrder(v);   
    for(int i = 0;i < aaa.size();i++){
        cout <<aaa[i] << " ";
    }

     cout << endl;   
    return 0;
}