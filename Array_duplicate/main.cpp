#include <iostream>

using namespace std;




int DuplicateNumber(int arr[], int size){

    int fre[size],count = 0,ans;



for(int i = 0;i<size;i++)
{
count = 1;
for(int j = i+1;j<size;j++)
{
   if(arr[i]==arr[j])
   {
       count++;
       fre[j]=0;
   }
}

if(fre[i]!=0)
{
    fre[i] = count;
}


}


for(int i=0;i<size;i++)
{
    if(fre[i]!=0){


if(fre[i]==2){
        ans=arr[i];

}


    }
}

    return ans;

}




int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << DuplicateNumber(input, size) << endl;
	}

	return 0;
}
