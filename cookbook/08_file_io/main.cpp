#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void write_file(const std::string& file_name)
{
  std::ofstream fout;
  // note: current working directory is ./cmake-build-debug/cookbook/08_file_io
  fout.open(file_name);
  if (!fout.is_open()) {
    std::cout << "> failed to open text.txt" << std::endl;
    abort();
  }
  fout << "writting line 1" << std::endl;
  fout << "writting line 2" << std::endl;
  fout << "writting line 3" << std::endl;
  fout.close();
  fout.clear();
}

void read_file(const std::string& file_name)
{
  std::ifstream fin;
  fin.open(file_name);
  if (!fin.is_open()) {
    std::cout << "> failed to open text.txt" << std::endl;
    abort();
  }
  char ch;
  while (fin.get(ch)) {
    std::cout << ch;
  }
  fin.close();
  fin.clear();
}

std::vector<std::string> read_file_lines(const std::string& file_name)
{
  std::vector<std::string> lines;

  std::ifstream fin;
  fin.open(file_name);
  if (!fin.is_open()) {
    std::cout << "> failed to open text.txt" << std::endl;
    abort();
  }
  std::string line;
  while (getline(fin, line)) {
    lines.push_back(line);
  }
  fin.close();
  fin.clear();

  return lines;
}

int main()
{
  std::cout << "> reading input.txt" << std::endl;
  read_file("input.txt");

  std::cout << "> writting new text.txt" << std::endl;
  write_file("text.txt");

  std::cout << "> reading previous text.txt" << std::endl;
  read_file("text.txt");

  std::cout << "> reading text.txt by line to a vector" << std::endl;
  std::vector<std::string> lines = read_file_lines("text.txt");
  std::cout << "line count: " << lines.size() << std::endl;
  for (std::string line : lines) {
    std::cout << line << std::endl;
  }

  return EXIT_SUCCESS;
}