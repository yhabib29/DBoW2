#include <iostream>
#include <string>

#include <DBoW2/DBoW2.h>


int main(int argc, char *argv[])
{
  /**
   * @author yhabib29
   * @note: Since OpenCV 4.0.0, the core module has been completely reimplemented in C++.
   * see https://github.com/opencv/opencv/wiki/ChangeLog#version400
   *
   * Iterating throught FileNode without iterator has become much more slower.
   * To compare, uncomment '#define ORIGINAL_DBOW2' in TemplatedVocabulary.h:13.
   *
   * Without iterator: 1,618,788 ns.
   * Using iterator:         895 ns.
   */
  std::cout << "Test DBoW2 library: (cv::FileNode performances)\n" << std::endl;

  OrbVocabulary vocab;
  std::string vocabulary_path = "ORBvoc.yml";

  if (argc > 1) {
      vocabulary_path = argv[1];
  }

  std::cout << "Loading vocabulary from " << vocabulary_path << std::endl << std::endl;
  vocab.load(vocabulary_path);
  std::cout << "\nLoaded vocabulary with " << vocab.size() << " visual words." << std::endl;

}
