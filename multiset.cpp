multiset <llt> mul;
llt maxElement = *mul.rbegin();
llt minElement = *mul.begin();

// Delete First occurence of num
auto first = mul.find(num);
mul.erase(it);

//deletes last occurence of num
auto last = ms.upper_bound(num);
mul.erase(last);

//deletes all occurences of num
mul.erase(num);

//insert
mul.insert(num);
