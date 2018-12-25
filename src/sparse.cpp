#include <iostream>
#include "bmsparsevec.h"

using namespace std;

int main(void)
{
    bm::sparse_vector<unsigned, bm::bvector<> > sv1;
    
    unsigned arr[3] = {1,2,3};
    sv1.import(arr, 3); // import from a C-style array (fastest way to populate)

    // optimize memory allocation of sparse vector
    {
        BM_DECLARE_TEMP_BLOCK(tb)
        sv1.optimize(tb);
    }
    
    cout << "sv1.size() = " << sv1.size() << endl;
    cout << "sv[]:";
    
    // print the vector elements using direct access operator
    for (unsigned i = 0; i < sv1.size(); ++i)
    {
        cout << sv1.at(i) << ",";
    }
    cout << endl;
    

    return 0;
}
