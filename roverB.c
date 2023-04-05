int move (char direction [], int tamanho);
int main (void){
		char comandos[] = {'D','D','D','E'};
		printf("%i", move(comandos, 4));
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
	}
	return coord;
}