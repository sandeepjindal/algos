// Make a string groupBy by substring

val inputList = listOf<String>("a","abc","xe", "df")
// this is the map of length and values associated with condition of it.length
inputList.groupBy{it.length}
