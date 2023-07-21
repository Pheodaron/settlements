#ifndef POPULATIONFILTER_H
#define POPULATIONFILTER_H

class PopulationFilter {
public:
  PopulationFilter();

  static const int NoFilter = 0;
  static const int MoreThan1Thousand = 100;
  static const int MoreThan10Thousands = 10000;
  static const int MoreThan25Thousands = 25000;
  static const int MoreThan50Thousands = 50000;
  static const int MoreThan100Thousands = 100000;
  static const int MoreThan250Thousands = 250000;
  static const int MoreThan500Thousands = 500000;
  static const int MoreThan1Million = 1000000;
  static const int MoreThan2Millions = 2000000;
};

#endif // POPULATIONFILTER_H
