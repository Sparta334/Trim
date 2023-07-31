/**
 * @file Trim.c
 * @author Ian, Chen
 * @brief Trim function implementation
 * @version 1.0
 * @date 2023-07-31
 * 
 * 
 */


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

    size_t sourceSqlStmtLength = (unsigned int)strlen((unsigned char *)sourceSqlStmt);

    // assign string startindex end endindex 
    size_t offset = direction * (sourceSqlStmtLength - 1);
    size_t startindex = 0;
    size_t endindex = sourceSqlStmtLength;

    size_t offsetDirection = 0;

    // direction 
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

   // Calculate space characters 
    while (sourceSqlStmt[offset] == ' ' && offset >= startindex && offset <= endindex - 1)
    {
        offset += offsetDirection;
    }

    
    if (direction == 0)
    { 
        memmove(sourceSqlStmt, sourceSqlStmt + offset, sourceSqlStmtLength - offset);
        sourceSqlStmt[sourceSqlStmtLength - offset] = '\0';
    }
    else if (direction == 1)
    {

        sourceSqlStmt[offset + 1] = '\0';
    }
}