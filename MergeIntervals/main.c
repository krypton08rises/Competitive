/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 * };
 *
 * typedef struct Interval interval;
 */
/*
 * intervals : the array of interval
 * sz : number of entries in intervals
 * newInterval : new Interval to be inserted
 * len : populate the length of returned array of intervals in len
 */
interval* insert(interval *intervals, int sz, interval newInterval, int *len) {
    int i,j,k,check=0;
    interval *A = (interval*)malloc(sizeof(interval)*sz);
    for(i=0;i<sz;++i){
        if(check!=0){
            if(intervals[i]->start<newInterval.end && intervals[i]->end<newInterval.end){
                intervals[i]->start = newInterval->start;
                intervals[i]->end = newInterval->end;
                continue;
            }
            else if(intervals[i]->start<newInterval->end){
                intervals[j]->end = intervals[i]->end;
                }
        }
        else if(intervals[i]->start-newInterval->start>0){  //in case we find range start
            intervals[i]->start = newInterval->start;       //less than intervals start
            check = 1;                                      //we
            if(intervals[i]->end<newinterval->end)
                intervals[i]->end = newinterval->end;
        }
        else if(intervals[i]->end-newInterval->start>0){
            intervals[i]->end = newInterval->end;
            check=1;
            j=i;
        }

        else if(intervals[i]->end<newInterval->start && intervals[i+1]->start>newInterval->end){
            A = (interval*)realloc(intervals,sizeof(interval)*(sz+1));
            for(k=sz;k>i+1;k--){
                A[k+1]->start = intervals[k]->start;
                A[k+1]->end = intervals[k]->end;
            }
            A[i+1]->start = newInterval->start;
            A[i+1]->end = newInterval->end;
            return A;
        }
        A[i]->start = intervals[i]->start;      // in case nos are not smaller than
        A[i]->end = intervals[i]->end;          // new interval
    }
}
        /*

    for(i=0;i<sz;++i){
        if(intervals[i].start==newInterval.start && intervals[i].end==newInterval.end)
            continue;
        if(intervals[i].end==newInterval.start && intervals[i+1].start==newInterval.end){
            intervals[i].end = intervals[i+1].end;
            for(j=i+1;j<sz-1;++j){
                intervals[j].start = intervals[j+1].start;
                intervals[j].end = intervals[j+1].end;
            }
        }
    }
    return intervals;
}
*/
