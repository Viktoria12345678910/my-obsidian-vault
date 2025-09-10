#include <iostream>
#include <filesystem>
// using namespace std;
namespace fs = std::filesystem;
int main(){
	fs::directory_entry USB{R"(/mnt)"};
	fs::directory_entry local{R"(/home/viktoria/second brain/second brain)"};
	// std::cout<<fs::txt  type() const noexcept { return _M_type; };
	if (local.is_regular_file()) 
    	std::cout << "\nIt is not a file\n";
}
