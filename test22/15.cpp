#include <iostream> 
#include <memory.h> 
#include <climits> 
#include <algorithm> 
#include <vector>

using  namespace std;

#define POINTNUM 7

//源點、匯點
int s, t;

//流網路的鄰接矩陣表示
int flowMap[POINTNUM][POINTNUM];

//標記走過的點
bool used[POINTNUM];

//印出增廣路
// vector<int> path;

int fordFulkerson( int s, int t, int flow)
{
    int ret = 0 ;
     if (s == t)
         return flow;
    used[s] = true ;
     for ( int i = 1 ; i < POINTNUM; i++ )
    {
        if (!used[i] && flowMap[s][i] > 0 )
        {
            //決定增廣路上的最大流量
            int f = min(flow, flowMap[s][i]);
            ret = fordFulkerson(i, t, f);
             if (ret > 0 )
            {
                //修改目前圖中的流量
                flowMap[s][i] -= ret;
                flowMap[i][s] += ret;
                 // path.push_back(i); 
                return ret;
            }

        }
    }
    return ret;
}



int main()
{
    //初始化整個流網路
    memset(flowMap, 0 , sizeof (flowMap));
     // 1 代表s，最後一個點代表t 
    s = 1 ;
    t = 6 ;
     int u = 2 ;
     int v = 3 ;
     int w = 4 ;
     int x = 5 ;
    flowMap[s][u] = 18 ;
    flowMap[s][v] = 16 ;
    flowMap[v][u] = 6 ;
    flowMap[u][w] = 16 ;
    flowMap[w][v] = 19 ;
    flowMap[v][x] = 14 ;
    flowMap[x][w] = 7 ;
    flowMap[x][t] = 8 ;
    flowMap[w][t] = 22 ;

    int maxFlow = 0 ;

    while ( true )
    {
        memset(used, false , sizeof (used));
         int tmp = fordFulkerson(s, t, INT_MAX);
         if (tmp == 0 )
             break ;
         else
        {
        /*     path.push_back(s);
            for (vector<int>::reverse_iterator iter = path.rbegin(); iter != path.rend(); iter++)
            {
                if (iter == path.rbegin())
                    cout << *iter;
                else
                    cout << "->" << *iter;
            }
            cout <<" flow :" << tmp << endl;
            path.clear(); */ 
            maxFlow += tmp;
        }
            
    }


    cout << maxFlow << endl;
}