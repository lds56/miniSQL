

class BufferManager {
public:
	unsigned char[] read(Address address);
	bool write(Address address, unsigned char[] data);
	Address findFree(String tableName);
	Block readFromFile(string fileName, int offset);
	bool writeToFile(string fileName, int offset, Block block);
}
