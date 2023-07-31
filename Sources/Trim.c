#include "Trim.h"

/**
 * @brief Trim the SQL statement
 *
 * @param sourceSqlStmt unsigned char* The source SQL statement needs to be trimmed
 * @param direction short When the value is 0, it means that the string removes trailing whitespace from the left side.
 * When the value is 1, it removes leading whitespace from the right side.
 * @return void
 */
void Trim(unsigned char *sourceSqlStmt, short direction)
{

    unsigned int sourceSqlStmtLength = (unsigned int)strlen((char *)sourceSqlStmt);

    /** assign string startindex end endindex */
    unsigned int offset = direction * (sourceSqlStmtLength - 1);
    unsigned int startindex = 0;
    unsigned int endindex = sourceSqlStmtLength;

    unsigned int offsetDirection = 0;

    unsigned char *secondSqlStmt = NULL;

    /** direction */
    if (direction == 0)
    {
        offsetDirection = 1;
    }
    else if (direction == 1)
    {
        offsetDirection = -1;
    }
    else
    {
        exit(1);
    }

    /** Calculate space characters */
    while (sourceSqlStmt[offset] == ' ' && offset >= startindex && offset < endindex)
    {
        offset += offsetDirection;
    }

    printf("%d",sourceSqlStmtLength - offset);
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    // 0 1 2 3
    if(offset == 0 || offset >= endindex-1  ){

        printf("No Space");

    }
    else{
        if (direction == 0)
        {                                           //53-1                //10-0
            secondSqlStmt = (unsigned char *)malloc((sourceSqlStmtLength - offset + 1) * sizeof(unsigned char));
            memcpy(secondSqlStmt, sourceSqlStmt + offset, sourceSqlStmtLength - offset -1 );
            secondSqlStmt[sourceSqlStmtLength - offset-1] = '\0';
            printf("%s", secondSqlStmt);
            memcpy(sourceSqlStmt, secondSqlStmt, sourceSqlStmtLength - offset-2);

            sourceSqlStmt[sourceSqlStmtLength - offset-1] = '\0';
        }
        else if (direction == 1)
        {

            sourceSqlStmt[offset + 1] = '\0';
        }
    }

    free(secondSqlStmt);
      
}