 vector<int> res;
       queue<Node*> q;
       q.push(root);
       while(!q.empty())
       {
           int size = q.size();
           while(size)
           {
               Node * curr = q.front();
               q.pop();
               if(curr->left)
               q.push(curr->left);
               if(curr->right)
               q.push(curr->right);
               size--;
               if(size==0)
               {
                   res.push_back(curr->data);
               }
               
               
           }
       }
       return res;
