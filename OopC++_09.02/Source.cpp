//#include "Header.h"
//
//class File
//{
//private:
//	FILE* file;
//public:
//	File(const char* filename, const char* mode) {
//		file = fopen(filename, mode);
//		if (file == NULL)
//		{
//			cout << "Error opening file" << endl;
//			exit(1);
//		}
//	}
//	~File() {
//		fclose(file);
//	}
//	void Write(const char* str) {
//		fputs(str, file);
//	}
//	void Read(char* str, int n) {
//		fgets(str, n, file);
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	File file("test.txt", "w");
//	file.Write("Hello world!");
//	file.~File();
//	file = File("test.txt", "r");
//	char str[100];
//	file.Read(str, 100);
//	cout << str << endl;
//	file.~File();
//	return 0;
//}