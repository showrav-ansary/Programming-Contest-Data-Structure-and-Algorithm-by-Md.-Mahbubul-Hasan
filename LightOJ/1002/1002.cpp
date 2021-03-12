#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Enabling fast I/O for Cpp. Don't use anything that disrupts fast I/O (For example: `endl`).
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCases, numberOfCities, numberOfRoads,
        sourceCity, destinationCity, roadCost, homeTown, maxCostFound;
    /*
    sourceCity = edge's first endpoint 
    destinationCity = edge's second endpoint 
    homeTown = source node from where we traverse
          
    */

    cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        cin >> numberOfCities >> numberOfRoads;

        vector<int> areaMap[numberOfCities];      //actual graph 
        int distanceFromHomeTown[numberOfCities]; //distance output array
        int cost[numberOfCities][numberOfCities]; //road costs

        memset(cost, 0, sizeof(cost)); //initially setting the costs as not specified
        for (int i = 0; i <= numberOfCities; i++)
            distanceFromHomeTown[i] = INT_MAX;

        //Adding each given roads while checking if already a low cost road exist between them or not
        for (int i = 0; i < numberOfRoads; i++)
        {
            cin >> sourceCity >> destinationCity >> roadCost;

            if (cost[sourceCity][destinationCity]) //checking any previous road exists or not
            {
                cost[sourceCity][destinationCity] = cost[destinationCity][sourceCity] = min(cost[sourceCity][destinationCity], roadCost);
            }
            else
            {
                //adding new road
                areaMap[sourceCity].push_back(destinationCity);
                areaMap[destinationCity].push_back(sourceCity);
                cost[sourceCity][destinationCity] = cost[destinationCity][sourceCity] = roadCost;
            }
        }

        cin >> homeTown;

        queue<int> cityQueue; //making a queue to traverse through each of the city

        cityQueue.push(homeTown); //pushing the home town as our start point or source node 

        distanceFromHomeTown[homeTown] = 0;

        while (!cityQueue.empty())
        {

            
            int startingCity = cityQueue.front();

            cityQueue.pop(); //taking it out since it will be traversed now

            //Checking the other cities that can be reached via startingCity

            /* 
            don't sum previous road costs.
            as per problem requirement, we only update distance by maximum weight encountered.
            don't check for duplicate enqueueing as we may find a better path that has less max value.
            we need to go full brute force leaving no path unchecked because of the problem requirements.
            */

            for (int i = 0; i < areaMap[startingCity].size(); i++)
            {
                int currentCity = areaMap[startingCity][i];
                maxCostFound = max(distanceFromHomeTown[startingCity],
                                   cost[startingCity][currentCity]);
                if (distanceFromHomeTown[currentCity] > maxCostFound)
                {
                    distanceFromHomeTown[currentCity] = maxCostFound;
                    cityQueue.push(currentCity); 
                }
            }
        }

        cout << "Case " << i << ":\n";
        for (int i = 0; i < numberOfCities; i++)
            if (distanceFromHomeTown[i] == INT_MAX)
                cout << "Impossible\n";
            else
                cout << distanceFromHomeTown[i] << "\n";
    }

    return 0;
}
