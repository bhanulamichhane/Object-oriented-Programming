int main()
{
    float w [4] = {56.4f,60.8f,72.0f,77.5f};   
    int i;
    
    for(i=0; i<4; i++)
    {
       printf("\n\nAddress: %d\tweights[%d] = %f", &w[i],i,w[i]);         
    } 
    
    getch();
}
