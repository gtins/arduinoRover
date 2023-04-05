int move (char direction);
int main (void){
		printf("%i", move('D'));
		return 0;
}
int move (char direction){
	int coord = 0;
		if (direction == 'D'){
			coord ++;
		}
		if (direction == 'E'){
			coord --;
		}
	return coord;
}