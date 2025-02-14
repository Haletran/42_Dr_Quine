#include <stdio.h>

/*
This is a comment
*/

void xd()
{
}

int main()
{
    /*
    This is another comment
    */
    char *test = "\n#include <stdio.h>\n\n/*\nThis is a comment\n/*\nvoid xd()\n{\n}\nint main()\n{\n/*\nThis is a another comment\n*/\nchar *test = %c%s%c;\nxd();\nprintf(test);\n\n}";
    xd();
    printf(test, 34, test, 34);
    return 0;
}
