// 1700
 queue<int> q;
        for(auto& i : students){
            q.push(i);
        }
        short i = 0;
        short lpCounter = 0;

        while(i < sandwiches.size() && lpCounter < q.size()){
            auto p = q.front();
            q.pop();

            if(p != sandwiches[i]){
                q.push(p);
                lpCounter++; 
            }
            else{
                i++;
                lpCounter = 0;
            }            
        }

        return q.size();
