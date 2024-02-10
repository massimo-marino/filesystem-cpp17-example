#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
  fs::current_path(fs::temp_directory_path());
  fs::create_directories("sandbox/a/b");
  std::ofstream("sandbox/file1.txt");
  fs::create_symlink("a", "sandbox/syma");
  for (const fs::directory_entry& entry: fs::recursive_directory_iterator("sandbox")) {
    std::cout << entry.path() << '\n';
  }
  fs::remove_all("sandbox");

  return 0;
}

