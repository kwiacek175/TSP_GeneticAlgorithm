#ifndef E3_GENETICALGORITHM_H
#define E3_GENETICALGORITHM_H
#include <vector>
#include "structures/Graph.h"

class GeneticAlgorithm
{
    int stop;
    int populationSize;
    float crossRate;
    float mutationRate;
    int **matrix;
    int size;

public:
    GeneticAlgorithm(Graph *graph, int stop, int population, float crossRate, float mutationRate);
    int calculatePath(std::vector<int> &path);
    void orderedCrossover(std::vector<int> &parent1, std::vector<int> &parent2);
    void partiallyCrossover(std::vector<int> &parent1, std::vector<int> &parent2);
    bool isInPath(int element, int begin, int end, std::vector<int> &path);
    int apply(bool crossing);
};
#endif
