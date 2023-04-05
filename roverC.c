int move (char direction [], int tamanho);
int matriz = 4;
int main (void){
		char comandos[] = {'D','D','D','E','B','B','B','E','E','C','C','C'};
			printf("%i", move(comandos, 16));
		return 0;
}
int move (char direction [], int tamanho){
	int coord = 0;
	for(int i=0;i<tamanho;i++){
		if (direction [i] == 'D'){
			coord ++;
		}
		if (direction [i]== 'E'){
			coord --;
		}
		if (direction [i] == 'B'){
			coord = coord + matriz;
		}
		if (direction [i] == 'C'){
			coord = coord - matriz;
		}
	}
	return coord;
}