/***********************************************
 * This program finds the peak value for a
 * given array. Depending on the array structure
 * there can be more than one peak.
 *
 * @author Sebastian Mark
 * CSCI 3200 Algorithms
 * Professor Hamid
 * ********************************************/

#include <iostream>

void findingPeak(int arraySize, int array[]) {

  int totalPeaks = 0;
  int result;

  // checks if the first element is a peak
  if (array[0] >= array[1]) {
    std::cout << "Peak:" << array[0] << " Index: 0" << std::endl;
    totalPeaks++;
  }
  // checks if the last element is a peak
  if (array[arraySize - 1] >= array[arraySize - 2]) {
    std::cout << "Peak:" << array[arraySize - 1] << " Index:" << arraySize - 1 << std::endl;
    totalPeaks++;
  }

  for (int i = 1; i < arraySize - 1; i++) {

    // checks for the middle case
    // if the element is greater than its neighbors then its a peak
    if (array[i] >= array[i - 1] && array[i] >= array[i + 1]) {
      std::cout << "Peak:" << array[i] << " Index:" << i << std::endl;
      totalPeaks++;
    }
  }
  // printing total number of peaks
  result = totalPeaks;
  std::cout << "Total peaks = " << result << std::endl;
}

int main() {

  std::cout << "*****************Testcase One***********" << std::endl;
  int array[] = {10, 5, 7, 3, 3, 2, 5, 4};
  int size = sizeof(array) / sizeof(array[0]);
  findingPeak(size, array);

  std::cout << "******************Testcase Two************" << std::endl;
  int arrayTwo[] = {1, 2, 1};
  int sizeTwo = sizeof(arrayTwo) / sizeof(arrayTwo[0]);
  findingPeak(sizeTwo, arrayTwo);

  std::cout << "*************Testcase Three*************" << std::endl;
  int arrayThree[] = {3, 4, 1, 7, 2};
  int sizeThree = sizeof(arrayThree) / sizeof(arrayThree[0]);
  findingPeak(sizeThree, arrayThree);

  std::cout << "***********Testcase Four***************" << std::endl;
  int arrayFour[] = {0,2,13,3,6,9,5,25,1};
  int sizeFour = sizeof(arrayFour) / sizeof(arrayFour[0]);
  findingPeak(sizeFour, arrayFour);

  std::cout << "***********Testcase Five**************" << std::endl;
  int arrayProblemTwoTest[] = {10, 7, 5, 3};
  int sizeFive = sizeof(arrayProblemTwoTest)/sizeof(arrayProblemTwoTest[0]);
  findingPeak(sizeFive, arrayProblemTwoTest);

  return 0;
}
