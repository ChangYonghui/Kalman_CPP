#include <stdio.h>
#include <stdlib.h>

int main(){

	while(1)
		system("rostopic pub -r 1 foo5 geometry_msgs/Twist -f /home/jack/Bureau/CPP/Trame_generators/PIDMsg");

	return 0;
}
