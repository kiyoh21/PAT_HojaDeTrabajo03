#include "Ejercicio02.h"
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings) {
    unordered_map<string, vector<string>> map;
    for (string& s : strings) {
        string key = s;
        sort(key.begin(), key.end());
        map[key].push_back(s);
    }

    auto* result = new vector<vector<string>>();
    for (auto& p : map) {
        result->push_back(p.second);
    }

    return result;
}
