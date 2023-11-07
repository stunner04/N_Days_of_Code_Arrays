#include <bits/stdc++.h>

void sort012(int *arr, int n) // sort 012 in ascending order
{
    int l = 0, m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (arr[m] == 0) // ensures left side have only 0's
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1) // ensures middle section have 1's
        {
            m++;
        }
        else // ensures right side have only 2's
        {
            swap(arr[h], arr[m]);
            h--;
        }
    }
}

// VARIATION of DUTCH NATIONAL FLAG ALGORITHM

void sort012(int *arr, int n) // sort 012 in descending order
{
   int l = 0,m=0;
   int h = n-1;

   while(m<=h)
   {
      if(arr[m]==2) // ensures left side have only 2's
      {
         swap(arr[l],arr[m]);
         l++;
         m++;
      }
      else if (arr[m]==1) // ensures middle section have 1's
      {
         m++;
      }
      else // ensures right side have only 0's
      {
          swap(arr[h],arr[m]);
          h--;
      }
   }
}

void sort0123(int *arr, int n) // sort 0123 in ascending order
{
    int l = 0, m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (arr[m] == 0) // ensures left side have only 0's
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1) // ensures  middle section have 1's
        {
            m++;
        }
        else if (arr[m] == 2) // ensures  middle section have 2's
        {
            m++;
        }
        else // ensures right side have only 3's
        {
            swap(arr[h], arr[m]);
            h--;
        }
    }

/*
Once this initial phase is completed, you have the following sections:

The left section contains only 0's.
The middle section (from l to h) contains 1's and 2's.
The right section contains only 3's.

The second while loop is used to handle the middle section, which contains 1's and 2's. It traverses from l to h:

If arr[l] is 2, it's swapped with arr[h] to move the 2 to the right section. The h pointer is then moved one step to the left.
If arr[l] is 1, it's already in the correct section, and the l pointer is moved to the next element.
*/

    while (l <= h)  // sort 1,2 sub array
    {
        if (arr[l] == 2)
        {
            swap(arr[l], arr[h]);
            h--;
        }
        else
        {
            l++;
        }
    }
}