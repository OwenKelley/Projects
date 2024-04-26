/*
  Owen Kelley
  8 - 31 - 2022
  Algorithms
  home/studets/okelley/algo/program.cpp

  About: This progam demonstrates each of the different sorting algorithms
*/
  #include <vector>
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  #include <algorithm>
  #define INFINITY 2000
  using namespace std;
  int arry[INFINITY][INFINITY];
  int P[INFINITY][INFINITY];
  int W[INFINITY][INFINITY];

///////////////////////////////////////////////////////////////////////////////////
  void print(int n)
  {
   cout<<"  ";
   for(int i=1 ; i<=n ; i++)
   {
    cout<<setw(5)<<"v"<<i<<"  |";
   }
   cout << endl;

   for(int j=1 ; j<=n ; j++)
   {
    cout<<"v"<<j;
    for(int k=1 ; k<=n ; k++)
    {
     cout<<setw(6)<<arry[j][k]<<"  |";
    }
    cout<<endl;
   }
  }

  void Pprint(int n)
  {
   cout<<"  ";
   for(int i=1 ; i<=n ; i++)
   {
    cout<<setw(5)<<"v"<<i<<"  |";
   }
   cout << endl;

   for(int j=1 ; j<=n ; j++)
   {
    cout<<"v"<<j;
    for(int k=1 ; k<=n ; k++)
    {
     cout<<setw(6)<<P[j][k]<<"  |";
    }
    cout<<endl;
   }
  }

  void Wprint(int n)
  {
   cout<<"  ";
   for(int i=1 ; i<=n ; i++)
   {
    cout<<setw(5)<<"v"<<i<<"  |";
   }
   cout << endl;

   for(int j=1 ; j<=n ; j++)
   {
    cout<<"v"<<j;
    for(int k=1 ; k<=n ; k++)
    {
     cout<<setw(6)<<W[j][k]<<"  |";
    }
    cout<<endl;
   }
  }
///////////////////////////////////////////////////////////////////////////////////
  void floy(int n)
  {
   for(int k=1 ; k<=n ; k++)
   {
    for(int i=1 ; i<=n ; i++)
    {
     for(int j=1 ; j<=n ; j++)
     {
      if(arry[i][k] + arry[k][j] < arry[i][j])
      {
       P[i][j]=k;
       arry[i][j] = arry[i][k] + arry[k][j];
      }
     }
    }
   }
  }
/////////////////////////////////////////////////////////////////////////////////
  void path(int q,int r)
  {
//   cout<<"PATH HAS BEEN CALLED ##############"<<endl;
   if(P[q][r] != 0)
   {
    path(q, P[q][r]);
    cout<<" v"<<P[q][r];
    path(P[q][r], r);
   }
  }
/////////////////////////////////////////////////////////////////////////////////
  int main()
  {
   cout<<endl;
   int count = 0;
   int n;
   int m;
//   ifstream inFile("gfw1.dat");

/////////////////////////////////////////////////
   ifstream inFile;
   string filename;
   int i = 0;
   char in;
   int from;
   int to;
   
   cout<<"Enter File Name: "<<endl;
   cin>>filename;
   inFile.open(filename);
   if(!inFile)
   {
      cout << "Cannot open the input file. Program will terminate." << endl;
      return 1;
   }
   inFile >> n; // NODES
   inFile >> m; // EDGES

   for(int j=1 ; j<=n ; j++)
   {
    for(int k=1 ; k<=n ; k++)
    {
     if(j==k)
     {
        arry[j][k] = INFINITY;
        W[j][k] = 0;
     }
     else
     {
        arry[j][k] = INFINITY;
        W[j][k] = INFINITY;
     }
    }
   }
   for(int j=1 ; j<=n ; j++)
   {
    for(int k=1 ; k<=n ; k++)
    {
     P[j][k] = 0;
    }
   }
   for(int j=1 ; j<=n ; j++)
   {
    arry[j][j] = 0;
    P[j][j] = 0;
   }
   string node1;
   string node2;
   int edge;
   
//Load data into array until EOF
   while(!inFile.eof() && i < m)
   {
    inFile >> node1;
    inFile >> node2;
    inFile >> edge;

    node1.erase(remove(node1.begin(), node1.end(), 'v'), node1.end());
    node2.erase(remove(node2.begin(), node2.end(), 'v'), node2.end());

    from = stoi(node1);
    to = stoi(node2);

    W[from][to] = edge;
    arry[from][to] = edge;

    i = i + 1;
   }
   int paths;
   int x=0;
   inFile >> paths;

   floy(n);

   while(!inFile.eof() && x<paths)
   {
    inFile >> node1;
    inFile >> node2;

    node1.erase(remove(node1.begin(), node1.end(), 'v'), node1.end());
    node2.erase(remove(node2.begin(), node2.end(), 'v'), node2.end());

    from = stoi(node1);
    to = stoi(node2);
   
    cout<<endl<<"Path from v"<<from<<" to v"<<to<<endl;
    if(P[from][to] != 0)
    {
     cout<<"v"<<from<<" ";
     path(from, to); 
     cout<<" v"<<to<<endl;
    }
    else
    {
     cout<<"No path between v"<<from<<" and v"<<to<<endl;
    }
    x=x+1;
   }
////////////////////////////////////////////////////////////
   inFile.close();

   cout<<endl;
   cout<<endl<<endl;

   cout<<"W Print"<<endl;
   Wprint(n);
   cout<<"P Print"<<endl;
   Pprint(n);

   cout<<endl<<endl<<endl;

   return 0;
  }
///////////////////////////////////////////////////////////////////////////////////












