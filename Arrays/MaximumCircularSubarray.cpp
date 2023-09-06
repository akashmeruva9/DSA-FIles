#include<iostream>
using namespace std;

int Kadane( int n , int arr[])
{
    int sum = 0;
    int Maxsum = 0;

    for(int i = 0; i<n ; i++)
    {
        sum = sum + arr[i];

        if( sum > Maxsum)
        Maxsum = sum;

        if(sum<0)
        sum = 0;
    }

    return Maxsum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
      cin>>arr[i];
    
    int MaxSsum = Kadane(n , arr);
    int TotalSum = 0;

    for( int i =0 ; i<n ; i++)
    {
        TotalSum += arr[i];

        arr[i] = -arr[i];
    }
    
    int Minsum = Kadane( n, arr);
    int MaxCsum = TotalSum + Minsum;

    if(MaxSsum > MaxCsum)
    cout<<MaxSsum;
    else 
    cout<<MaxCsum;

}


def find_max_people(swipes):
    max_people = 0
    count = 0
    
    for swipe in swipes:
        if swipe % 2 == 1:  # In swipe
            count += 1
        else:  # Out swipe
            count -= 1
        
        max_people = max(max_people, count)
    
    return max_people


def main():
    num_test_cases = int(input())

    for _ in range(num_test_cases):
        num_swipes = int(input())
        swipes = list(map(int, input().split()))
        max_people = find_max_people(swipes)
        print(max_people)


if __name__ == "__main__":
    main()
