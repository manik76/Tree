/***************************************************************************
                          |FILENAME narytree.txt|  
                          N-ary Tree Traversal Logic
                             -------------------
    begin                : |DATE 23/2/2005|
    copyright            : (C) |YEAR 2001| by 
                           |திருவாளர். முனைவர். பிளாசிட் ரோட்ரிக்சு ஐயா,
                                  அறிவியல் இயக்குநர்,
                               இந்திராகாந்தி அணு ஆராய்ச்சி நிலையம், கல்பாக்கம் 603102| 
                           |மென்பொருளாளர். க. மணிகண்டன் 
                                      Ex. So/c
                               இந்திராகாந்தி அணு ஆராய்ச்சி நிலையம்,கல்பாக்கம் 603102|
    email                : |EMAIL manik762002@gmail.com|
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


#include <iostream.h>
struct NODE
{
  int Child;
  int Friend;
  int Parent;
  int PayLoad[30];
}

void main(void)
{

    int NumOfNodes = 0, tempIndex = 0;
     struct NODE naryTree[10] 
       = {{ 2,-1,-1,"a"},
           {5,3,1,"b"},{7,4,1,"c"},{},{}
          }
whie (tempIndex < 10)
  {
       cout << tempIndex << " th data is :";
       cout << naryTree[tempIndex].PayLoad<<endl;
       tempIndex++;
   }
tempIndex = 1;
while(1)
{
    cout << naryTree[tempIndex - 1].PayLoad << endl;
    if(naryTree[naryTree[tempIndex - 1].Parent-1].Parent == 1 &&
    naryTree[naryTree[tempIndex - 1].Parent - 1].Friend == -1 &&
    naryTree[tempIndex - 1].Friend == -1)
    {
        break;
      }
    if(naryTree[tempIndex - 1].Child != -1)
     {
        tempIndex = naryTree[tempIndex - 1].Child;
        continue;
     }
    if(naryTree[tempIndex - 1].Friend != -1)
     {
        tempIndex = naryTree[tempIndex - 1].Friend;
        continue;
     }
    if(naryTree[tempIndex - 1].Parent != -1)
     {
        tempIndex = naryTree[naryTree[tempIndex - 1].Parent-1].Friend;
        continue;
     }
}
}
