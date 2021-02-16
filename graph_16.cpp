class Solution {
public:
	bool isBipartite(int V, vector<int>adj[])
	{
	    vector<int>color(V, -1);
		queue<int>q;
		bool is_Bipratite = true;
		for(int i = 0; i < V; i++){
			if(color[i] == -1){
				q.push(i);
				color[i] = 0;
				while(!q.empty()){
					int u = q.front();
					q.pop();
					for(auto v: adj[u]){
						if(color[v] == -1){
							color[v] = color[u] ^ 1;
							q.push(v);
						}
						else is_Bipratite = is_Bipratite & (color[u] != color[v]);
					}

				}
			}
		}
		return is_Bipratite;
	}

};
