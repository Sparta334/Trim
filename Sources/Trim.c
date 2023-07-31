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

    /** assign string startindex end endindex */
    size_t offset = direction * (sourceSqlStmtLength - 1);
    size_t startindex = 0;
    size_t endindex = sourceSqlStmtLength;

    size_t offsetDirection = 0;

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
    while (sourceSqlStmt[offset] == ' ' && offset >= startindex && offset <= endindex - 1)
    {
        offset += offsetDirection;
    }
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    // 0 1 2 3
    if (!(offset == 0 || offset == endindex - 1))
    {

        if (direction == 0)
        { // 53-1                //10-0
            memmove(sourceSqlStmt, sourceSqlStmt + offset, sourceSqlStmtLength - offset);
            sourceSqlStmt[sourceSqlStmtLength - offset] = '\0';
        }
        else if (direction == 1)
        {

            sourceSqlStmt[offset + 1] = '\0';
        }
    }
}