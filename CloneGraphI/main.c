/*Clone a graph. Input is a Node pointer. Return the Node pointer of the cloned graph.*/

/*A graph is defined below:*/
/*struct Node {*/
    /*vector neighbors;*/
/*}*/
/*}*/
/*NOTES: There are two main ways to traverse a graph, Breadth-first or Depth-first. */
    /*Breadth-first travesal would need queue, pop a node off the queue, copy each of its neighbors and push them*/
    /*to the queue. */
    /*How to tell if the graph is directed or undirected?     For this problem, it must be a directed queue. */
    /*Need to handle the case that there exist any circles in the graph.*/
    /*We could use hash table to check if a node has already been copied or not. The key is a node in the original graph*/
    /*and its value is the node's copy*/





