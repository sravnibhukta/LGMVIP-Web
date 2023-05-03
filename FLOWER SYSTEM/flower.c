#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct flower {
           char name[20];
	char description[1000];
	char scientificname[1000];
	char family[1000];
	char kingdom[1000];
	char lifecycle[1000];
	char floweringtime[1000];
	char habitat[1000];
};
int main() 
{ 
    FILE *fp; 
    char flowername[20]; 
    struct flower f; 
  //Opening file in read mode 
    fp = fopen("flower.txt", "r"); 
  //Taking input flower name 
    printf("Enter Flower Name: "); 
    scanf("%s", flowername); 
   //Reading file contents until EOF 
    while(fscanf(fp, "%s  %[^\n]%*c %[^\n]%*c %[^\n]%*c %[^\n]%*c %[^\n]%*c %[^\n]%*c %[^\n]%*c", &f.name, &f.description, &f.scientificname, &f.family,&f.kingdom, &f.lifecycle, &f.floweringtime, &f.habitat)!=EOF) 
    { 
        //Comparing input name with the name in file 
        if(strcmp(f.name,flowername)==0) 
        { 
            //Printing flower details 
            printf("Name: %s\n", f.name); 
            printf("Description of the Flower: %s\n", f.description);
	printf("Scientific name of the flower: %s\n", f.scientificname);
	printf("Family of the flower: %s\n", f.family);
	printf("Kingdom: %s\n",f.kingdom);
	printf("Lifecycle: %s\n", f.lifecycle);
	printf("Flowering time : %s\n",f.floweringtime);
	printf("Habitat: %s\n",f.habitat); 
        } 
else
{
Printf(“not found”);
}
}
    //Closing file 
    fclose(fp); 
   return 0; 
}
