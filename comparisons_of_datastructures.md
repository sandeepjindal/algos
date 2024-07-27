## Array data strutures
1. List: Represents an ordered collection that allows duplicates.
2. ArrayList: Resizable array implementation, efficient for random access.
3. LinkedList: Doubly linked list, efficient for insertions and deletions.
4. Vector: Similar to ArrayList but synchronized, less efficient.
5. [CopyOnWriteArrayList](https://www.baeldung.com/java-copy-on-write-arraylist)
   Basic Operations: get, set, add, remove, size, isEmpty, clear
   Bulk Operations: addAll, removeAll, retainAll
   Iterative Operations: iterator

## Set
1. Set: Represents an unordered collection that does not allow duplicates.
2. HashSet: Implements a set using a hash table, provides fast lookups.
3. TreeSet: Implements a set based on a tree structure, maintains sorted order.
4. LinkedHashSet: Maintains insertion order in addition to set behavior.

## Queue
1. Queue: Represents a collection where elements are added at one end and removed from the other (FIFO).
2. PriorityQueue: Implements a priority queue based on a heap.
3. LinkedList: Can be used as a queue.
4. ConcurrentLinkedQueue:  A thread-safe queue implementation based on a linked list
5. BlockingQueue: An interface for queues that support blocking operations for retrieval and insertion.
    Basic Operations: put, take, offer, poll, peek, size, isEmpty, remainingCapacity
    Blocking Operations: drainTo, put, take


## Map
1. Map: Represents a collection of key-value pairs.
2. HashMap: Implements a map using a hash table, allows null keys and values.
3. TreeMap: Implements a map based on a tree structure, maintains sorted order.
4. LinkedHashMap: Maintains insertion order in addition to map behavior.
5. ConcurrentHashMap: Thread safe;
  Basic Operations: put, get, remove, containsKey, size, isEmpty, clear
  Bulk Operations: putAll, forEach, reduce, search
  Advanced Operations: compute, computeIfAbsent, computeIfPresent, merge   
6. ConcurrentSkipListMap: A thread-safe sorted map based on a skip list
   Basic Operations: put, get, remove, containsKey, size, isEmpty, clear
   Navigable Map Operations: firstKey, lastKey, headMap, tailMap, subMap
   Concurrent Operations: putIfAbsent, remove, replace
