#include <iostream>
#include <iomanip>
#include "DenseGraph.h"
#include "SparseGraph.h"
#include "ReadGraph.h"
#include "LazyPrimMST.h"

using namespace std;

// 测试有权图和有权图的读取
int main() {

    string filename = "testG1.txt";
    int V = 8;
    cout<<fixed<<setprecision(2);


//    测试有权图 ----- start
//    // Test Weighted Dense Graph
//    DenseGraph<double> g1 = DenseGraph<double>(V, false);
//    ReadGraph<DenseGraph<double>,double> readGraph1(g1, filename);
//    g1.show();
//    cout<<endl;
//
//    // Test Weighted Sparse Graph
//    SparseGraph<double> g2 = SparseGraph<double>(V, false);
//    ReadGraph<SparseGraph<double>,double> readGraph2(g2, filename);
//    g2.show();
//    cout<<endl;
//    测试有权图 ----- end


    //    测试Prim ----- start
    SparseGraph<double> g = SparseGraph<double>(V, false);
    ReadGraph<SparseGraph<double>, double> readGraph(g, filename);

    // Test Lazy Prim MST
    cout << "Test Lazy Prim MST:" << endl;
    LazyPrimMST<SparseGraph<double>, double> lazyPrimMST(g);
    vector<Edge<double>> mst = lazyPrimMST.mstEdges();
    for (int i = 0; i < mst.size(); i ++)
        cout << mst[i] << endl;
    cout << "The MST weight is: " << lazyPrimMST.result() << endl;
    cout << endl;
    //    测试Prim ----- end

    return 0;
}