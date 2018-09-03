#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int mat[5][5],cnt[5][5],n;

    cout<<"enter the number of iterations: \n"<<endl;//Taking user input for the number of iterations.
    cin>>n;

    for(int i=0 ; i<5 ; i++) //This nested for loop initializes both the counter_matrix(cnt) and the Initial_grid(mat) to zero
    {
        for(int j=0 ; j<5 ; j++)
        {
            mat[i][j]= 0;
            cnt[i][j]= 0;
        }
    }

    for(int i=0 ; i<5 ; i++) //This nested for loop takes user input for the initial matrix.
    {
        for(int j=0 ; j<5 ; j++)
        {
            cout<<"Enter the value of ["<<i<<"]]"<<j<<"]"<<endl;
            cin>>mat[i][j];
        }
    }

    cout<<"\n";
    cout<<"\n";
    cout<<"This is the initial Grid\n"<<endl;

    for(int i=0 ; i<5 ; i++) // This nested for loop prints the initial grid.
    {
        cout<<"| ";
         for(int j=0 ; j<5 ; j++)
         {
              cout<<mat[i][j]<<" ";
         }
         cout<<"|\n";
    }

     cout<<"\n";
     cout<<"\n";


/////////////////////////////////////////////////////////////////////////////////////////

    for(int k=1 ; k<=n ; k++) //This part of the nested for loop counts the number of iterations.
    {
            for(int i=0 ; i<5 ; i++) //This nested for loop updates the counter_matrix(cnt).
            {
                for(int j=0 ; j<5 ; j++)
                {
                    cnt[i][j]= 0;
                }
            }

            for(int i=0 ; i<5 ; i++) //This nested for loop is responsible for checking each position in the Grid Matrix and
            {                        //update the matrix with the new values of 1's and 0's.
                for(int j=0 ; j<5 ; j++)
                {
                    if(((i>=0)&&(i<5))&&((j>=0)&&(j<5)))
                    {
                        if(mat[i+1][j-1]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i+1][j]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i+1][j+1]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i][j-1]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i][j+1]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i-1][j-1]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i-1][j]==1)
                        {
                            cnt[i][j] += 1;
                        }
                        if(mat[i-1][j+1]==1)
                        {
                            cnt[i][j] += 1;
                        }
                    }
                }
            }
/////////////////////////////////////////////////////////////////////////////////////////


            for(int i=0 ; i<5 ; i++) //This nested for loop defines the 4 rules of the problem
            {
                for(int j=0 ; j<5 ; j++)
                {
                    if((mat[i][j]==1)&&(cnt[i][j]<2)) //Rule 1.
                       mat[i][j] = 0;
                    else if((mat[i][j]==1)&&((cnt[i][j]==2)||(cnt[i][j]==3))) //Rule 2.
                        continue;
                    else if((mat[i][j]==1)&&(cnt[i][j]>3)) //Rule 3.
                        mat[i][j] = 0;
                    else if((mat[i][j]==0)&&(cnt[i][j]==3)) //Rule 4.
                        mat[i][j] = 1;
                }
            }

            cout<<"This is iteration number: "<<k<<endl;

            for(int i=0 ; i<5 ; i++) //This nested for loop prints the updated grid after the iteration.
            {
                cout<<"| ";
                for(int j=0 ; j<5 ; j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<"| \n";
            }

            cout<<"\n";
            cout<<"\n";

    }


}

