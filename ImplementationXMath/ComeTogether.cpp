#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int x = 0; x < t; x++){
   
        vector<pair<int, int>> vp;
        for(int i = 0; i < 3; i++) {
            int p1, p2;
            cin >> p1 >> p2;
            vp.push_back(make_pair(p1, p2));
        }

        // for (const auto& pr : vp) {
        //     cout << pr.first << ", " << pr.second << endl;
        // }

        // vp[0].first
        // vp[1].first
        // vp[2].first
        int result = 0;
        if((vp[0].first < vp[1].first and vp[0].first < vp[2].first) or (vp[0].first > vp[1].first and vp[0].first > vp[2].first)){
            // 2 tai 1 pase
            if((vp[0].second < vp[1].second and vp[0].second > vp[2].second) or (vp[0].second > vp[1].second and vp[0].second < vp[2].second)){
                int sm = min(vp[1].first, vp[2].first);
                int maxx = max(sm, vp[0].first);
                int minn = min(sm, vp[0].first);
                result = (maxx - minn) + 1;
            }else{
                int smx = min(vp[1].first, vp[2].first);
                int smy = min(vp[1].second, vp[2].second);
                // cout << "SMX: " << smx << " SMY: " << smy << endl;
                result = (smx + smy)-1;
            }
        } 
        
        else if((vp[0].first < vp[1].first and vp[0].first > vp[2].first) or (vp[0].first > vp[1].first and vp[0].first < vp[2].first)){
            // 2 ta vinno pase
            if((vp[0].second < vp[1].second and vp[0].second > vp[2].second) or (vp[0].second > vp[1].second and vp[0].second < vp[2].second)){
                result = 1;
            }else{
                int sm = min(vp[1].second, vp[2].second);
                int maxx = max(sm, vp[0].second);
                int minn = min(sm, vp[0].second);
                result = (maxx - minn) + 1;
            }
            
        }
        
        else{
            if((vp[0].second < vp[1].second and vp[0].second > vp[2].second) or (vp[0].second > vp[1].second and vp[0].second < vp[2].second)){
                result = 1;
            }else{
                int sm = min(vp[1].second, vp[2].second);
                if(vp[0].second > sm){
                    int maxx = max(vp[1].second, vp[2].second);
                    result = (vp[0].second - maxx)+1;
                }else{
                    result = (sm - vp[0].second) + 1;
                }
            }
        }



        cout << result << endl;
    }



    

    return 0;
}