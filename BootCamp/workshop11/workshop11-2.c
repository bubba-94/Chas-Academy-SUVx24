int main() {
int test;
int *pInt = 0;
test = 10;
// Print the value of test variable
printf("\nTest's value = %i", test);
// Print the address of test variable
printf("\nTest's address as integer = %p", &test); 
// Which formatspecifier to use?
// Print the address of test variable in hexadecimal format
printf("\nTest's address in hexadecimal format = %x", &test); 
// Whichformat specifier to use?

pInt = &test;

// Print the value of pInt variable
printf("\nTest's value = %i", *pInt);
// Print the address of pInt variable
printf("\nTest's address as integer = %p", pInt); 
// Print the address of pInt variable in hexadecimal format
printf("\nTest's address in hexadecimal format = %x", pInt); 
// Replace the value and print the value of test variable
*pInt = 15;
printf("\nNow, test's value = %i", *pInt);
return 0;
}
/*
• Fyll i de tre första printf()-funktionerna med rätt variabel och eventuellt
tillhörande symbol för att skriva ut rätt sak. Välj också matchande identifierare för
formatet på variabelns utskrift.
• Komplettera med tre nya printf() under respektive kommentar efter
tilldelningen till pInt.
• Fyll även i den sista printf() med rätt variabel för att se effekten av pekarens
tilldelning.
*/
