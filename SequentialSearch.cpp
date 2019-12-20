// 2019, 12/20, pm 1:45, by Queenie Chen
// Sequential Search
// to compare 2 unordered lists using Sequential Search

void Verify2Lists(Element *f1, Element *f2, const int n, const int m)
{
    bool *marked = new bool [m];
    for (int i = 1; i <= m; i++) marked[i] = false;

    //@satisfation1
    for(i = 1;i <= n; i++)
    {
        int j = SeqSearch(f2, m, f1[i].getKey());

        //@satisfaction3
        if(j==0) cout<< f1[i].getKey() << "not in f2" <<endl
        else
        {
            if(f1[i].other != f2[j].other)
                cout<< "distinction in" << f1[i].getKey() << ":"
                    << f1[i].other << "and" << f2[j].other << endl;
            marked[j] = true;
        }
        
    }

    //@satisfaction2
    for(i = 1; i <= m; i++)
        if(!marked[i]) cout<< f2[i].getKey() << "not in f1" << endl; 
    

    
    delete [] marked;

}