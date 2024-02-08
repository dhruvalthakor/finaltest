#include <stdio.h>
#include<string.h>
//------Q6-----------
struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    struct Mobile mobiles[3];


    for (int i = 0; i < 3; i++) {
        printf("Enter details for mobile %d:\n", i + 1);
        printf("Company name: ");
        scanf("%s", mobiles[i].company_name);
      
    }

  
    for (int i = 0; i < 3; i++) {
        printf("Mobile %d:\n", i + 1);
        printf("Company: %s\n", mobiles[i].company_name);
   
    }

    return 0;
}
