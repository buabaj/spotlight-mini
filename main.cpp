#include <iostream>
#include <string>
#include <filesystem>
#include <vector>

using namespace std;
namespace fs = std::filesystem;

int main()
{
    string search_path, file_name;

    cout << "Enter the path to search: ";
    getline(cin, search_path);

    cout << "Enter the file name to search: ";
    getline(cin, file_name);

    vector<fs::path> results;
    for (const auto& entry : fs::recursive_directory_iterator(search_path))
    {
        if (entry.is_regular_file() && entry.path().filename().string().find(file_name) != string::npos)
        {
            results.push_back(entry.path());
        }
    }

    if (results.empty())
    {
        cout << "No matching files found\n"
             << endl;
    }
    else
    {
        cout << "Found " << results.size() << " files" << endl;
        for (const auto& result : results)
        {
            cout << result << endl;
        }
    }
    return 0;
}