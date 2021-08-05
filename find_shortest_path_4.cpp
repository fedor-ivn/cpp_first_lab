int find_shortest_path_4(int distances[4][4]) {
    int currentMinimalPathDistance = 1000000;
    int firstCity = 0;

    for (int secondCity = 1; secondCity <= 3; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity <= 3; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity <= 3; fourthCity = fourthCity + 1) {
                int orderOfCitiesInPath[4] = {
                    firstCity,
                    secondCity,
                    thirdCity,
                    fourthCity
                };

                bool citiesInPathAreAllDifferent = true;

                for (int firstIndex = 0; firstIndex <= 3; firstIndex = firstIndex + 1) {
                    for (int secondIndex = 0; secondIndex <= 3; secondIndex = secondIndex + 1) {
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
                    currentPathDistance += distances[fourthCity][firstCity];

                    if (currentPathDistance < currentMinimalPathDistance)
                        currentMinimalPathDistance = currentPathDistance;
                }
            }
        }
    }

    return currentMinimalPathDistance;
}
