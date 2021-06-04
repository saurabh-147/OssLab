# include <stdio.h>
# include <string.h>

int main()
{
	FILE *fp;
	
	char dataWrite[50] = "//Hello,Here's Some Basic File Handling Using C";
    char dataRead[50];

    //opening the file created 
    fp= fopen("example.c", "w") ;
        
    if ( fp== NULL )
    {
        printf( "example.c file failed to open." ) ;
    }
    else
    {      
        printf("The file is now opened.\n") ;

        //Writing Data to example.c

        if ( strlen ( dataWrite) > 0 )
        {	
            //Writing into the file
            fputs(dataWrite, fp) ;
            fputs("\n", fp) ;
        }
            
        //Reading Data from example.c
        while( fgets ( dataRead, 50, fp) != NULL )
        {
            printf( "%s" , dataRead) ;
        }
        
        //Closing the file
        fclose(fp) ;
        printf("Data successfully read from file example.c\n");
        printf("The file is now closed.") ;
    }
	return 0;		
}