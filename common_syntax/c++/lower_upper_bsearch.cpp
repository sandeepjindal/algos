binary_search(a, a + 10, 2)


lower = lower_bound(v.begin(), v.end(), 6);
upper = upper_bound(v.begin(), v.end(), 6);

cout << "lower_bound for 6 at position "
     << (lower - v.begin() + 1) << '\n';
cout << "upper_bound for 6 at position "
     << (upper - v.begin() + 1) << '\n';
