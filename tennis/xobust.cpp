#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <math.h>
#include <string>
#include <map>

bool rev (int i,int j) { return (i>j); }

//Vi is short for vector<int>
#define vi std::vector<int>

using namespace std;



//data structures

vi adjlist[110];

vi dist;

std::queue<int> bfsQ;


int main()
{
    	std::ios_base::sync_with_stdio(false);
    
	int n,m,k;
	
	cin >> n >> k;
	
	dist.assign(n+1, -1);
	
	cin >> m;
	
	int a,b;
	for(int i = 0; i<m; i++)
	{
	cin >> a;
	cin >> b;
	
	adjlist[a].push_back(b);
	}
	
	dist[k] = 0;

	bfsQ.emplace(k);
	
	while(!bfsQ.empty())
	{
	
		int current = bfsQ.front(); //curent vertex
		bfsQ.pop();
	
		for(auto it = adjlist[current].begin(); it != adjlist[current].end();it++)
		{
			
			if(dist[*it] == -1)
			{
				dist[*it] = dist[current] +1;
				bfsQ.push(*it);
			}
		}
	}

    
    
    
    
    	cout<<dist[1];
    
}

