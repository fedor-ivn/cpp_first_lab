#include <vector> 


using namespace std;

int find_shortest_path_5(int distances[5][5]) {
    int currentMinimalPathDistance = 1000000;
    int firstCity = 0;

    for (int secondCity = 1; secondCity < 5; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity < 5; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity < 5; fourthCity = fourthCity + 1) {
                for (int fifthCity = 1; fifthCity < 5; fifthCity = fifthCity + 1) {
                    int orderOfCitiesInPath[5] = {
                        firstCity,
                        secondCity,
                        thirdCity,
                        fourthCity,
                        fifthCity
                    };

                    bool citiesInPathAreAllDifferent = true;

                    for (int firstIndex = 0; firstIndex < 5; firstIndex = firstIndex + 1) {
                        for (int secondIndex = 0; secondIndex < 5; secondIndex = secondIndex + 1) {
                            if (firstIndex != secondIndex) {
                                int firstCityToCheck = orderOfCitiesInPath[firstIndex];
                                int secondCityToCheck = orderOfCitiesInPath[secondIndex];
                                if (firstCityToCheck == secondCityToCheck) {
                                    citiesInPathAreAllDifferent = false;
                                }
                            }
                        }
                    }

                    if (citiesInPathAreAllDifferent == false) {
                        continue;
                    } else {
                        int currentPathDistance = 0;
                        currentPathDistance += distances[firstCity][secondCity];
                        currentPathDistance += distances[secondCity][thirdCity];
                        currentPathDistance += distances[thirdCity][fourthCity];
                        currentPathDistance += distances[fourthCity][fifthCity];
                        currentPathDistance += distances[fifthCity][firstCity];

                        if (currentPathDistance < currentMinimalPathDistance)
                            currentMinimalPathDistance = currentPathDistance;
                    }
                }
            }
        }
    }

    return currentMinimalPathDistance;
}
