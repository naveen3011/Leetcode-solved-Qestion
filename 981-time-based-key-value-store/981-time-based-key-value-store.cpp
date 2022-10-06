
class TimeMap {
public:
    
    static bool compare(pair <string,int> p1, pair <string,int> p2){
        return p1.second<p2.second;
    }
    
    unordered_map <string, vector<pair<string,int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        auto itr=upper_bound(m[key].begin(),m[key].end(),make_pair("",timestamp),compare);
        if(itr==m[key].begin()){
            return "";
        }
        
        return prev(itr)->first;
    }
};
;

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */