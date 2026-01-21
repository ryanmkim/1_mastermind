#include <vector>
#include<cstdlib>
#include <ctime>
using namespace std;


class code {

    private: 
        std::vector<int> content;
        int n;
        int m;
    public:
        code(int length, int range) {
            n = length;
            m = range;
            content.resize(n);
        }

        void initializeRandom() {
            for (int i = 0; i < n; i++) {
                content[i] = rand() % m;
            }
        }
};