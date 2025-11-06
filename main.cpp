#include "Graph.hpp"

using namespace std;

int main(){
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4, 2);

  G.print();


  cout << "El num de edges es: " << G.numEdges() << endl;

  cout << "El degree es: " << G.inDegree(9) << endl;

  cout << "Es influencer: " << G.isInfluencer(9) << endl;

  

}
