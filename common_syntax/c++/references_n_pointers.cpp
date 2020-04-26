//passing by pointer

void swap(int* x, int* y) 
{ 
    int z = *x; 
    *x = *y; 
    *y = z; 
} 
  
int main() 
{ 
    int a = 45, b = 35; 
    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swap(&a, &b); 
  
    cout << "After Swap with pass by pointer\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
} 

//passing by reference // int& x, int& y just in function signature.
void swap(int& x, int& y) 
{ 
    int z = x; 
    x = y; 
    y = z; 
} 
  
int main() 
{ 
    int a = 45, b = 35; 
    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swap(a, b); 
  
    cout << "After Swap with pass by reference\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
} 
