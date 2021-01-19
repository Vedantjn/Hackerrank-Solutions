#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sum=0;
    int max=0;
    
    for(int r=0;r<=3;r++)    //r=row & c=column
    {
        for(int c=0;c<=3;c++)
        {
            sum = arr[r][c]+arr[r][c+1]+arr[r][c+2]+
                            arr[r+1][c+1]+
                  arr[r+2][c]+arr[r+2][c+1]+arr[r+2][c+2];
                  
                  if (sum>max || r==0 && c==0  )  //if the first hourglass is max
                  max=sum; 
        }
    }
            cout<<max;

    
    return 0;
}
