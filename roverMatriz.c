int move (char direction [8][8], int matriz);
int matriz = 8;
int main (void){
		char comandos[8][8] = {'D','D','D','E','B','B','B','E','C','C','E'};
		printf("%i", move(comandos, matriz));
		return 0;
}
int move (char direction [8][8], int matriz){
	int coord = 1;
	for(int i=0;i<matriz;i++){
		for(int j=0;j<matriz;j++){
		if (direction [i][j] == 'D'){
			coord ++;
		}
		if (direction [i][j]== 'E'){
			coord --;
		}
		if (direction [i][j]== 'B'){
			coord = coord + matriz;
		}
		if (direction [i][j]== 'C'){
			coord = coord - matriz;
		}
		printf("%i ",coord);
		}
	}
return coord;
}