#include<bits/stdc++.h>

using namespace std;
 


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b , c , d;
        cin>> a >>b>>c>>d;

        int cnt;

        if(b>a)
            cnt++;
        if(c>a)
            cnt++;
        if(d>a)
            cnt++;
        cout<<cnt;
    }
}
class Solution {
public:
    
    
    bool isSafe(int i, int j, int m, int n){
        return (i>=0 && i<m && j>=0 && j<n);
    }
    bool isBorder(int i, int j, int m, int n){
        return (i==0 || i==m-1 || j==0 || j==n-1);
    }
    void solve(vector<vector<char>>& board) {
        //flood fill the regions surrounded on all 4 sides
        
        int row = board.size();
        if(row==0)
            return;
        int col = board[0].size(); 
        
        queue<pair<int,int>> q;
        
        vector<pair<int, int>> dir = {{1,0}, {-1,0}, {0, 1}, {0, -1}};
        
        for(int i =0 ; i<row;i++)
        {
            for (int j=0; j<col;j++){
                if(board[i][j]=='0'&& isBorder(i,j,row,col))
                {
                    board[i][j]='+'; //convert the 0 into + , we will later change it to 0
                    q.push({i,j});

                }
                
                
                while(!q.empty())
                {
                    pair<int, int> temp = q.front();
                    // int a = q.front().first;
                    // int b = q.front().second;
                    q.pop();
                    
                    //checking in all directions
                    for(int i=0;i<dir.size();i++){
                        
                         int x = temp.first + dir[i].first;
                         int y = temp.second + dir[i].second;
                        // int x = a + dir[i].first;
                        // int y = b + dir[i].second;
				        // So, the (x,y) must be possible within the matrix and it must not be on the border.
                        if(isSafe(x,y,row,col) && !isBorder(x,y,row,col) && board[x][y]=='O'){
                            
                        board[x][y]= '+';
                        q.push({x,y});
                        }
                    }

                }
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                // Just convert the remaining 'O' into 'X' as they are not connected to any border 'O'.
                if(board[i][j]=='O')
                    board[i][j] = 'X';
                // Now, convert the '.' into 'O' as they were connected to some border 'O'.
				else if(board[i][j]=='+')
                    board[i][j] = 'O';
                
            }
        }
                
			    
       
        
    }
};