/*
The municipal tourism agency of the city of Ica in Peru has set up a checkpoint for adventure jeeps that ascend to the dunes of Hucachina Park. As during the day, there are several off-roads that go up and down the national park, and tourists do not always use the same transportation for the round trip, the city hall needed to have better control and security over the flow of visitors in the park. Develop a program that receives as input if a jeep is entering or returning from the park and the amount of tourists this vehicle is transporting. At the end of the shift, the program must indicate how many vehicles and tourists are still missing from the adventure.

Input
The program must receive successive input pairs. Each pair should indicate the jeep's movement and the amount of tourists it is carrying. The first entry should be "SALIDA" or "VUELTA". "SALIDA" should indicate that the jeep is leaving the center and entering the park; and "VUELTA" that the Jeep is returning from the ride. Immediately following, the program receives an integer T (where, 0 <= T <=20) indicating the amount of tourists being transported by the jeep. The string "ABEND" should be the end-of-processing indicator.

Output
As a goal the program must present two exits, one in each line: the amount of tourists and the amount of jeeps that still need to return from the park.

Input Samples	Output Samples
SALIDA 10
SALIDA 12
SALIDA 10
VUELTA 20
ABEND

12
2

SALIDA 15
SALIDA 20
VUELTA 15
VUELTA 15
SALIDA 0
VUELTA 0
ABEND

5
0
*/
#include <stdio.h>
#include <string.h>

int main() {
    char command[10];
    int tourists, jeeps_in_park = 0, tourists_in_park = 0;

    while (1) {
        scanf("%s", command);
        
        if (strcmp(command, "ABEND") == 0) {
            break;
        }

        scanf("%d", &tourists);

        if (strcmp(command, "SALIDA") == 0) {
            jeeps_in_park++;
            tourists_in_park += tourists;
        } else if (strcmp(command, "VUELTA") == 0) {
            jeeps_in_park--;
            tourists_in_park -= tourists;
        }
    }

    printf("%d\n", tourists_in_park);
    printf("%d\n", jeeps_in_park);

    return 0;
}
