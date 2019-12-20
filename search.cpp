// 2019, 12/20, am 11:05, by Queenie
// sequential search

int SeqSearch(Element *f, const int n, const int insertedKey)
{
    int i = n;
    f[0].setKey(insertedKey);
    while(f[i].getKey() != insertedKey) i--;
    return i;
}