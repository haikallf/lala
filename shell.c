int mod(int bil, int bag);
int div(int bil, int bag);
void clear(char *buffer, int length);
void copyStr(char *from, char *to);

// Implementasi Modulo
int mod(int bil, int bag) {
    int bilc = bil;
    while (bilc >= bag) {
        bilc -= bag;
    }
    return bilc;
}

// Implementasi Div
int div(int bil, int bag) {
    int bilc = bil;
    int c = 0;
    while (bilc >= bag) {
        c++;
        bilc -= bag;
    }
    return c;
}

// Mengosongkan isi buffer (mengisi dengan 0x00)
void clear(char *buffer, int length) {
	int i = 0;
	while (i < length) {
		// isi buffer[i] (seluruh isi buffer) dengan 0
		buffer[i] = 0x00;
		i++;
	}
}

void copyStr(char *from, char *to) {
	int i = 0;
	while (from[i] != 0x00) {
		to[i] = from[i];
		i++;
	}
	to[i] = 0x00;
}
