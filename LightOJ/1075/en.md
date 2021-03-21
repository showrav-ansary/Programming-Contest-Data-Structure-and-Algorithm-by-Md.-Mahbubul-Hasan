# LOJ 1075 - Finding Routes
---
Tags : Associative Array, Map, Dictionary, Key-Value Pair

Shakil has been the greatest boy-scout in Bangladesh and has become quite a superstar because he always organized the most wonderful scavenger hunts (you know, where the kids have to find a certain route following certain hints). Shakil has retired now, but a nation-wide election quickly found a successor for him, a guy called Nabil. He does a poor job though, and wants to learn from Shakil's routes. Unfortunately Shakil has left only a few notes for his successor.

Shakil never wrote down his routes completely, he only left lots of little sheets on which he had written two consecutive steps of the routes. He then mixed these sheets and memorized his routes similarly to how some people learn for exams: practicing again and again, always reading thef irst step and trying to remember the following. This made much sense, since one step always required something from the previous step. Nabil however would like to have a route written down as one long sequence of all the steps in the correct order. Please help him make the nation happy again by reconstructing the routes. Shakil never visited a single place twice.

### Input

Input starts with an integer __T (≤ 80)__, denoting the number of test cases.

Each case contains one route and its first line tells you how many steps __(3 ≤ S ≤ 333)__ the route has. The next __S - 1__ lines, each contains one consecutive pair of the steps on the route separated by a single space. The name of each step is always a single string of letters.

### Output

For each case, print the case number in a single line. Then print __S__ lines containing the steps of the route in the correct order. Print a blank line after each case.

### Helpful Resources
* [Associative array - Wikipedia](https://en.wikipedia.org/wiki/Associative_array "WikiPedia")
* [Introduction to Hash Tables and Dictionaries (Data Structures & Algorithms #13) - CS Dojo -YouTube](https://www.youtube.com/watch?v=sfWyugl4JWA "Maps and Hash tables")
* [Map in C++ Standard Template Library (STL) - GeeksForGeeks - YouTube](https://youtu.be/kDwXAmLz47w "C++ Programming Language Tutorial | Map in C++ STL | GeeksforGeeks")
* [Map (Go Programming Language) - GeeksforGeeks - YouTube](https://www.youtube.com/watch?v=j5KA7K0-gbY)
* [Python Maps - TutorialsPoint](https://www.tutorialspoint.com/python_data_structure/python_maps.htm "Python - Maps")

## Solution
This is an implementation problem that we can solve with map/associative-array/dictionary/similar key-value pair data structure.

To keep record of the unique places, will assign an __unique number/ID__ to each __unique place's name__. We will have two arrays:
- __Count array__ : This will store the how many places are __directly__ connected to it. The number of __directly connected places__ can help us determine if this _particular_ place is the __ultimate start/end point or not__. The __ultimate start point__ will have __no__ other place __before__ that leads to it since it is the place from where traversing __starts__, in other words the _count_ will be `1`. Similarly, for __ultimate end point__, the _count_ will be `1` too and there will be no place to go to __after__ it.

- __Next Destination array__ : This array's `index = initial destination` (here, _initial destination_ does __not__ mean the ultimate start point) and `value = next destination`. Basically, `index ---> value = currentPoint ---> nextPoint`. It will help us storing we can go from where to where. Note that we will __not__ be updating this array as if the places were _bi-directional_ links. What we __won't__ do : `nextDestination[ID1] = ID2 & so nextDestination[ID2] = ID1`. __We are not updating in a bi-directional way__.



For input, we take two maps:
- __<Place, Unique Number>__ map: will save the inputs taking the __place's name__ as the __key__.

- __<Unique Number, Place>__ map: will save the inputs taking the __unique number assigned to that place__ as the __key__.

A map itself can avoid duplication of `key` entry, however if we push it anyways then the `value` will get updated which we don't want, so we will check if a `key` (Place's Name) has been added or not. We are keeping two maps so that we can __easily search up a place's unique number by putting it to the map and vice versa__ in a __constant__ time.

Now when we finally have everything done we can easily determine the __ultimate start point__ by the help of both `count` and `nextDestination` arrays. For example let's take a set of inputs:

```
4
SwimmingPool OldTree
BirdsNest Garage
Garage SwimmingPool
```

Now if we have done everything according to above mentioned procedures, we will have `nextDestination` and `count` array like this:

|Index (Unique Number)|Count| Next Destination| Start Point?|
|--|--|--|--|
|1|2|2|False|
|2|__1__|__0__|Ultimate End Point|
|__3__|__1__|__4__|__True__|
|4|2|1|False|

Since now we know the __ultimate start point__ we can start traversing as we also have __what is next, after that, then again after that... to the ultimate end point__.

Now if we just loop the following until the number of `steps` required, we get all the outputs.
```
Current Place's Name = <Unique Number, Place>[Current Place's ID]
Next Place's ID = Next Destination[Current Place's ID]
Current Place's ID = Next Place's ID  
```
The above implementation is `accepted`.

## Solution in C++
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Enable fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCases, steps, uniqueNumber, startPoint;
    string firstPoint, secondPoint;

    cin >> testCases;

    for (int test = 1; test <= testCases; test++)
    {
        cin >> steps;

        //Index is the origin and Value is the destination
        int nextDestination[steps + 1];


        //How many destinations are directly linked?
        int count[steps + 1];


        memset(nextDestination, 0, sizeof(nextDestination));//Setting to 0 for false
        memset(count, 0, sizeof(count));//Setting 0 for no direct connections

        map<string, int> placeIndexMap;//Map to store index as value
        map<int, string> indexPlaceMap;//Map to store string as value

        uniqueNumber = 1;
        for (int i = 1; i < steps; i++)
        {
            cin >> firstPoint >> secondPoint;

            //Checking if duplicate key or not
            if (!placeIndexMap[firstPoint])
            {
                placeIndexMap[firstPoint] = uniqueNumber;
                indexPlaceMap[uniqueNumber] = firstPoint;
                uniqueNumber++;
            }

            //Checking if duplicate key or not
            if (!placeIndexMap[secondPoint])
            {
                placeIndexMap[secondPoint] = uniqueNumber;
                indexPlaceMap[uniqueNumber] = secondPoint;
                uniqueNumber++;
            }

            /*
            Remember we are updating the array for one direction.
            Thus, when a count of a place is 1 but nextDestination array has 0 for that uniqueNumber,
            means that the place is the ultimate end point.
            And when count is relation is not 0 and count is not more than 1,
            it means that it is the ultimate start point.
            */

            //Updating a for the next point
            nextDestination[placeIndexMap[firstPoint]] = placeIndexMap[secondPoint];
            //We won't be updating the nextDestination for the other way around

            count[placeIndexMap[firstPoint]]++;//Incrementing how many places are directly linked
            count[placeIndexMap[secondPoint]]++;//Incrementing how many places are directly linked
        }

        //Finding the ultimate startPoint
        for (int i = 1; i < uniqueNumber; i++)
            if (nextDestination[i] && count[i] == 1)
            {
                startPoint = i;
                break;
            }

        cout << "Case " << test << ":\n";

        for (int i = 1; i <= steps; i++)
        {
            cout << indexPlaceMap[startPoint] << "\n";
            //Assigining the next start point (current start point's end point)
            startPoint = nextDestination[placeIndexMap[indexPlaceMap[startPoint]]];
        }

        cout << "\n";
    }

    return 0;
}
```
