# Sort_sort
排序演算法

# Key in List

We use list to mean a collection of records, each record has one or more fileds. The fields are known as keys.

Since the same list may be used for several diff apps, the key fileds fo record id depend on particular app.

And there are 2 ways to store list, sequentially or nonsequntially.

https://github.com/QueenieCplusplus/DataStructure_Sort/blob/master/README.md

# functions

search a list f with key val f[1].key, ..., f[n].key || f[0].key,...,f[n-1].key, return i;

search that f[i].key == insertedKey, if there is no such record, return 0.

# Sequential Search

Note that the record 0 with f[0].key = insertedKey simplifies the search by eliminating the need for an an end-of-list test (i<1) in the while loop, it reduces the run time considerably for large n.


                           f[0], f[1],..., f[n]
>>>

                           f[1], f[2],..., f[n-1]
                           

If no record in the list has key value insertedKey, then i = 0, and above function requires n + 1 comparisons.

The number of key comparisons made in the case of a successful search depends on the posistion of the key in the list.

if all keys are distinct as shown as

                      f[i].getKey() !=insertedKey

and key f[i].key is being searched for, then n-1+1 key comparisons are made.

It is possible to do much better when looking up phone number, the fact is that the entry in the list (i.e., the tele dir) are in lexicographic order. On the name key, it enables one tp look up a number while examing only a very few entries in the list.

# Binary Tree Search

https://github.com/QueenieCplusplus/DataStructure_Search

Binary tree search is one of the better-known methods for searching an ordered, sequential list. We note that when a sequential search is performed on a oredered list, the conditional of the while loop of SeqSearch Class provided in code file can be changed to 

                        f[i].getKey() > insertedKey
           // this improves the performance for the case of unsuccessful searches


