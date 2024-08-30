#include<stdio.h>
#include<stdlib.h>

int main()
{
    char n[100];
    int phn;
    int id;

    int cosmetics[4];  
    int groceries[4];  
    int beverages[4];  

    int cosmetic_prices[4] = {50, 150, 100, 10};
    int grocery_prices[4] = {42, 35, 50, 25};
    int beverage_prices[4] = {50, 95, 10, 40}; 

    printf("\t\t---------BILLING SYSTEM---------\n");
    printf("\t\t--------------------------------\n");
    printf("Customer Details\n\n");

    printf("Customer name: ");
    scanf("%s", n);
    printf("Phone number: ");
    scanf("%d", &phn);
    printf("Customer ID: ");
    scanf("%d", &id);

    printf("\t------------------------------------\n");
    printf("Cosmetics\n\n");
    printf("Soap: ");
    scanf("%d", &cosmetics[0]);
    printf("Shampoo: ");
    scanf("%d", &cosmetics[1]);
    printf("Spray: ");
    scanf("%d", &cosmetics[2]);
    printf("Gel: ");
    scanf("%d", &cosmetics[3]);

    printf("\t------------------------------------\n");
    printf("Groceries\n\n");
    printf("Sugar: ");
    scanf("%d", &groceries[0]);
    printf("Flour: ");
    scanf("%d", &groceries[1]);
    printf("Rice: ");
    scanf("%d", &groceries[2]);
    printf("Tea: ");
    scanf("%d", &groceries[3]);

    printf("\t------------------------------------\n");
    printf("Beverages\n\n");
    printf("Pepsi: ");
    scanf("%d", &beverages[0]);
    printf("Coca Cola: ");
    scanf("%d", &beverages[1]);
    printf("Coffee: ");
    scanf("%d", &beverages[2]);
    printf("Thumbs Up: ");
    scanf("%d", &beverages[3]);

    printf("\t------------------------------------\n");

    int cos = 0, gro = 0, bev = 0;

    for (int i = 0; i < 4; i++) {
        cos += cosmetics[i] * cosmetic_prices[i];
        gro += groceries[i] * grocery_prices[i];
        bev += beverages[i] * beverage_prices[i];
    }

    int total = cos + gro + bev;

    printf("Cosmetics\n");
    printf("Soap: %d, Rs\n", cosmetics[0] * cosmetic_prices[0]);
    printf("Shampoo: %d Rs\n", cosmetics[1] * cosmetic_prices[1]);
    printf("Spray: %d Rs\n", cosmetics[2] * cosmetic_prices[2]);
    printf("Gel: %d Rs\n", cosmetics[3] * cosmetic_prices[3]);
    printf("Total Cosmetics Price: %d Rs\n", cos);
    printf("\t------------------------------------\n");

    printf("Groceries\n");
    printf("Sugar: %d, Rs\n", groceries[0] * grocery_prices[0]);
    printf("Flour: %d Rs\n", groceries[1] * grocery_prices[1]);
    printf("Rice: %d Rs\n", groceries[2] * grocery_prices[2]);
    printf("Tea: %d Rs\n", groceries[3] * grocery_prices[3]);
    printf("Total Groceries Price: %d Rs\n", gro);
    printf("\t------------------------------------\n");

    printf("Beverages\n");
    printf("Pepsi: %d, Rs\n", beverages[0] * beverage_prices[0]);
    printf("Coca Cola: %d Rs\n", beverages[1] * beverage_prices[1]);
    printf("Coffee: %d Rs\n", beverages[2] * beverage_prices[2]);
    printf("Thumbs Up: %d Rs\n", beverages[3] * beverage_prices[3]);
    printf("Total Beverages Price: %d Rs\n", bev);
    printf("\t------------------------------------\n");

    printf("Total Amount: %d Rs\n", total);
    printf("\t------------------------------------\n");
    printf("\t-------------------------------------------------------------------------------\n");
    printf("The Market Point\n\n");

    printf("Product Name                           Quantity                           Price\n\n");
    printf("Soap                                    %d                                %d\n", cosmetics[0], cosmetics[0] * cosmetic_prices[0]);
    printf("Shampoo                                 %d                                %d\n", cosmetics[1], cosmetics[1] * cosmetic_prices[1]);
    printf("Spray                                   %d                                %d\n", cosmetics[2], cosmetics[2] * cosmetic_prices[2]);
    printf("Gel                                     %d                                %d\n", cosmetics[3], cosmetics[3] * cosmetic_prices[3]);
    printf("Sugar                                   %d                                %d\n", groceries[0], groceries[0] * grocery_prices[0]);
    printf("Flour                                   %d                                %d\n", groceries[1], groceries[1] * grocery_prices[1]);
    printf("Rice                                    %d                                %d\n", groceries[2], groceries[2] * grocery_prices[2]);
    printf("Tea                                     %d                                %d\n", groceries[3], groceries[3] * grocery_prices[3]);
    printf("Pepsi                                   %d                                %d\n", beverages[0], beverages[0] * beverage_prices[0]);
    printf("Coca Cola                               %d                                %d\n", beverages[1], beverages[1] * beverage_prices[1]);
    printf("Coffee                                  %d                                %d\n", beverages[2], beverages[2] * beverage_prices[2]);
    printf("Thumbs Up                               %d                                %d\n", beverages[3], beverages[3] * beverage_prices[3]);
    printf("Grocery Total Price: %d Rs\n\n", gro);
    printf("Cosmetics Total Price: %d Rs\n\n", cos);
    printf("Beverages Total Price: %d Rs\n\n", bev);
    printf("Total Price: %d Rs\n\n", total);
    printf("\t THANK YOU VISIT AGAIN");
    printf("\t-------------------------------------------------------------------------------\n");

    system("pause");
    return 0;
}
