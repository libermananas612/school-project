
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("Sorry, you are not eligible to vote yet.");
    }
    return 0;
}