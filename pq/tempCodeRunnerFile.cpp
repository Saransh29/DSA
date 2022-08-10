if (k == 0)
            res[pq.top().second] = "Gold Medal";
        else if (k == 1)
            res[pq.top().second] = "Silver Medal";
        else if (k == 2)
            res[pq.top().second] = "Bronze Medal";
        else
            res[pq.top().second] = to_string(k + 1);
        pq.pop();
        k++;
