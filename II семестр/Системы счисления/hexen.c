#include <stdio.h>

char c;


int main(void) {
/*	scanf("%c", &c);
	switch (c) {
		case '0' : printf("0"); break;
		case '1' : printf("1"); break;
                case '2' : printf("10"); break;
                case '3' : printf("11"); break;
                case '4' : printf("100"); break;
                case '5' : printf("101"); break;
                case '6' : printf("110"); break;
                case '7' : printf("111"); break;
                case '8' : printf("1000"); break;
                case '9' : printf("1001"); break;
                case 'A' : printf("1010"); break;
                case 'B' : printf("1011"); break;
                case 'C' : printf("1100"); break;
                case 'D' : printf("1101"); break;
                case 'E' : printf("1110"); break;
                case 'F' : printf("1111"); break;
	}
*/
	while (scanf("%c", &c) != EOF) {
 		switch (c) {
        	        case '0' : printf("0000"); break;
                	case '1' : printf("0001"); break;
                	case '2' : printf("0010"); break;
               		case '3' : printf("0011"); break;
                	case '4' : printf("0100"); break;
                	case '5' : printf("0101"); break;
                	case '6' : printf("0110"); break;
                	case '7' : printf("0111"); break;
                	case '8' : printf("1000"); break;
                	case '9' : printf("1001"); break;
                	case 'A' : printf("1010"); break;
                	case 'B' : printf("1011"); break;
                	case 'C' : printf("1100"); break;
                	case 'D' : printf("1101"); break;
                	case 'E' : printf("1110"); break;
                	case 'F' : printf("1111"); break;
			case ' ' : printf("\n"); break;
        	}

	}

	return 0;
}
