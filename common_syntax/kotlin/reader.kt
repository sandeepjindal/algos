// Read from the cli
val r = readLine()

// Reading the file
val reader = BufferedReader(FileReader("myFile.txt"))
val line = reader.readLine()

// or

val reader = FileReader("myFile.txt")
reader.close()
