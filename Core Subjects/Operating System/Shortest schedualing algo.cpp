#include <iostream>
#include <vector>
using namespace std;

int INDEX_NOT_USED(vector<int> arr,vector<int> index_vec){
    
    for(int i = 0 ; i < arr.size() ; i++){
        if(!index_vec[i]){
            return i;
        }
    }
    
    return -1;
}

bool TWO_SAME_VALUES(vector<int> arr,vector<int> index_vec,int number){
    int count = 0;
    
    for(int i = 0 ; i < arr.size() ; i++){
        if(!index_vec[i]){
            if(arr[i] == number){
                count++;
                if(count > 1) return 1;
            }
        }
    }
    
    return 0;
}

int MIN_INDEX(vector<int> process_id,vector<int> arrival_time,vector<int> bursttime,vector<int> index_vec,int burst_time,int no){
    int index = 0;
    
    if(no == 0){
        int small = arrival_time[INDEX_NOT_USED(arrival_time, index_vec)];
        
        for(int i = 0 ; i < arrival_time.size() ; i++){
            if(!index_vec[i]){
                if(small > arrival_time[i]){
                    small = arrival_time[i];
                    index = i;
                }
            }
        }
        
        if(!TWO_SAME_VALUES(arrival_time, index_vec,arrival_time[index])){
            return index;
        }
        else {
            int small = bursttime[INDEX_NOT_USED(bursttime, index_vec)];
            
            for(int i = 0 ; i < bursttime.size() ; i++){
                if(!index_vec[i]){
                    if(small > bursttime[i]){
                        small = bursttime[i];
                        index = i;
                    }
                }
            }
            
            return index;
        }
    }
    else{
        int i;
        for(i = 0 ; i < arrival_time.size() ; i++){
            if(!index_vec[i]){
                if(arrival_time[i] == burst_time){
                    break;
                }
            }
        }
        if(arrival_time[i] == burst_time){
            return i;
        }
        else{
            //--> Burst time
            {
                int small = bursttime[INDEX_NOT_USED(bursttime, index_vec)];
                
                for(int i = 0 ; i < bursttime.size() ; i++){
                    if(!index_vec[i]){
                        if(small > bursttime[i]){
                            small = bursttime[i];
                            index = i;
                        }
                    }
                }
            }
            
            //--> Arrival time
            {
                int small = arrival_time[INDEX_NOT_USED(arrival_time, index_vec)];
                int index2 = 0;
                
                for(int i = 0 ; i < arrival_time.size() ; i++){
                    if(!index_vec[i]){
                        if(small > arrival_time[i]){
                            small = arrival_time[i];
                            index2 = i;
                        }
                    }
                }
                if(arrival_time[index2] <= bursttime[index] && no == 1){
                    return index2;
                }
                else{
                    return index;
                }
            }
        }
    }
}

vector<vector<int>> shortestJobFirst(long n,vector<int> &processId,vector<int> &arrivalTime,vector<int> &burstTime) {
    vector<vector<int>> result;
    int comp_time = 0, waiting_time = 0 , turnaround_time = 0, burst_Time = 0;
    vector<int> index_vec(processId.size(),0);
    
    for(int i = 0 ; i < n ; i++){
        int index = MIN_INDEX(processId,arrivalTime,burstTime,index_vec,burst_Time,i);
        if(i == 0){
            comp_time = arrivalTime[index] + burstTime[index];
            burst_Time = burstTime[index];
        }
        else{
            comp_time += burstTime[index];
            burst_Time = burstTime[index];
        }
        
        index_vec[index] = 1;
        turnaround_time = comp_time - arrivalTime[index];
        waiting_time = turnaround_time - burstTime[index];
        result.push_back({processId[index],arrivalTime[index],burstTime[index],waiting_time,turnaround_time});
    }
    
    return result;
}

int main() {
    vector<int> processID = {1, 4, 2, 3};
    vector<int> arrivalTime = {4, 3, 2, 1};
    vector<int> bursttime = {1 ,2 ,3 ,4};
    vector<int> index_vec(processID.size(),0);
    
    
    vector<vector<int>> show = shortestJobFirst(processID.size(), processID, arrivalTime, bursttime);
    for(auto i : show){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
