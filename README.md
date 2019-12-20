# Sort_sort
排序演算法

# Key in List

We use list to mean a collection of records, each record has one or more fileds. The fields are known as keys.

Since the same list may be used for several diff apps, the key fileds fo record id depend on particular app.

And there are 2 ways to store list, sequentially or nonsequntially.

# See Code

Note that the record 0 with f[0].key = insertedKey simplifies the search by eliminating the need for an an end-of-list test (i<1) in the while loop, it reduces the run time considerably for large n.


                           f[0], f[1],..., f[n]
                           

If no record in the list has key value insertedKey, then i = 0, and above function requires n + 1 comparisons.

The number of key comparisons made in the case of a successful search depends on the posistion of the key in the list.

if all keys are distinct as shown as f[i].getKey() !=k, and key f[i].key is being searched for, then n-1+1 key comparisons are made.

(to be done...)

