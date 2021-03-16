void handleInterrupt21(int AX, int BX, int CX, int DX);
void printChar(char *character); // print satu character
void printString(char *string); // print satu string dengan newline
void printS(char *string); // print satu string tanpa newline
void printLen(char *string, int length); // print dengan maksimum length
void printNewLine();
void carriageLine();
void printyoos();
void printStringColored(char *string, int line, int color);
void printyoosColored();
void readString(char *string);
void readSector(char *buffer, int sector);
void writeSector(char *buffer, int sector);
void writeFile(char *buffer, char *path, int *sectors, char parentIndex);
void readFile(char *buffer, char *path, int *result, char parentIndex);
void clear(char *buffer, int length); // Fungsi untuk mengisi buffer dengan 0
int mod(int bil, int bag);
int div(int bil, int bag);
int strlen(char* str);
int strcmp(char* str1, char* str2);
int idxP(char* path, int parentIndex, int *type);
