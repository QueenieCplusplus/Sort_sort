# Sort_sort
排序演算法

# Key in List

We use list to mean a collection of records, each record has one or more fileds. The fields are known as keys.

Since the same list may be used for several diff apps, the key fileds fo record id depend on particular app.

And there are 2 ways to store list, sequentially or nonsequntially.

# See Code

Note that the introduction of the record 0 with f[0].key = insertedKey simplifies the search by eliminating the need for an an end-of-list test (i<1) in the while loop, it reduces the run time considerably for large n.

If no record in the list has key value insertedKey, then i = 0, and above function requires n + 1 comparisons.

(to be done...)

