/* 
1) Initialize keys of all vertices as infinite and 
   parent of every vertex as -1.
2) Create an empty priority_queue pq.  Every item
   of pq is a pair (weight, vertex). Weight (or 
   key) is used  as first item  of pair
   as first item is by default used to compare
   two pairs.
3) Initialize all vertices as not part of MST yet.
   We use boolean array inMST[] for this purpose.
   This array is required to make sure that an already
   considered vertex is not included in pq again. This
   is where Prim's implementation differs from Dijkstra.
   In Dijkstra's algorithm, we didn't need this array as
   distances always increase. We require this array here 
   because key value of a processed vertex may decrease
   if not checked.
4) Insert source vertex into pq and make its key as 0.
5) While either pq doesn't become empty 
    a) Extract minimum key vertex from pq. 
       Let the extracted vertex be u.
    b) Include u in MST using inMST[u] = true.
    c) Loop through all adjacent of u and do 
       following for every vertex v.
           // If weight of edge (u,v) is smaller than
           // key of v and v is not already in MST
           If inMST[v] = false && key[v] > weight(u, v)
               (i) Update key of v, i.e., do
                     key[v] = weight(u, v)
               (ii) Insert v into the pq 
               (iv) parent[v] = u
               
6) Print MST edges using parent array.
 */

