/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/

void dfs(graphNode* node, graphNode* copy, vector<graphNode*> &vis)
    {
        vis[copy->data] = copy;
        for(auto x : node->neighbours)
        {
            if(vis[x->data]==NULL)
            {
                graphNode* newNode = new graphNode(x->data);
                (copy->neighbours).push_back(newNode);
                dfs(x,newNode,vis);
            }
            else
            {
                (copy->neighbours).push_back(vis[x->data]);
            }
        }
    }
graphNode *cloneGraph(graphNode *node)
{
    vector<graphNode*> visited(100001,NULL);
    if(node==NULL)
    {
        return node;
    }
    
    graphNode* copy = new graphNode(node->data);
    dfs(node,copy,visited);
    return copy;
}

