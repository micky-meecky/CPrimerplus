/*
#include<stdio.h>
#include<io.h>
#include<direct.h>
#include<string.h>
#include<stdlib.h>

#define MAX    256

long total;

int countLines(const char *filename);
void findAllCodes(const char *path);
void findALLFiles(const char *path);

int countLines(const char *filename)
{
	FILE *fp;
	int count = 0;
	int temp;

	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "can not open the file:%s\n", filename);
		return 0;
	}

	while ((temp = fgetc(fp)) != EOF)
	{
		if (temp == '\n')
		{
			count++;
		}
	}

	fclose(fp);

	return count;
}

void findAllCodes(const char *path)
{
	struct _finddata_t fa;
	long handle;
	char thepath[MAX], target[MAX];

	strcpy(thepath, path);
	if ((handle = _findfirst(strcat(thepath, "/*.c"), &fa)) != -1L)
	{
		do
		{
			sprintf(target, "%s/%s", path, fa.name);
			total += countLines(target);
		} while (_findnext(handle, &fa) == 0);
	}

	_findclose(handle);
}

void findALLDirs(const char *path)
{
	struct _finddata_t fa;
	long handle;
	char thePath[MAX];

	strcpy(thePath, path);
	if ((handle = _findfirst(strcat(thePath, "/*"), &fa)) == -1L)
	{
		fprintf(stderr, "The path %s is wrong!\n", path);
		return;
	}

	do
	{
		if (!strcmp(fa.name, ".") || !strcmp(fa.name, ".."))
			continue;

		if (fa.attrib == _A_SUBDIR)
		{
		sprintf(thePath, "%s/%s", path, fa.name);
		findAllCodes(thePath);
		findALLDirs(thePath);
		}

	} while (_findnext(handle, &fa) == 0);

	_findclose(handle);
}

int main()
{
	char path[MAX] = ".";

	printf("计算中...\n");

	findAllCodes(path);
	findALLDirs(path);

	printf("目前你总共写了 %ld 行代码！\n\n", total);
	system("pause");

	return 0;
}
*/
//**************************************************以下是复制的答案****************************************************************************//
#define _CRT_SECURE_NO_DEPRECATE
#include <io.h>
#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX        256

long total;

int countLines(const char* filename);
void findAllCodes(const char* path);
void findALLFiles(const char* path);

int countLines(const char* filename)
{
    FILE* fp;
    int count = 0;
    int temp;

    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Can not open the file：%s\n", filename);
        return 0;
    }

    while ((temp = fgetc(fp)) != EOF)
    {
        if (temp == '\n')
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}

void findAllCodes(const char* path)
{
    struct _finddata_t fa;
    long handle;
    char thePath[MAX], target[MAX];

    strcpy(thePath, path);
    if ((handle = _findfirst(strcat(thePath, "/*.c"), &fa)) != -1L)
    {
        do
        {
            sprintf(target, "%s/%s", path, fa.name);
            total += countLines(target);
        } while (_findnext(handle, &fa) == 0);
    }

    _findclose(handle);
}

void findALLDirs(const char* path)
{
    struct _finddata_t fa;
    long handle;
    char thePath[MAX];

    strcpy(thePath, path);
    if ((handle = _findfirst(strcat(thePath, "/*"), &fa)) == -1L)
    {
        fprintf(stderr, "The path %s is wrong!\n", path);
        return;
    }

    do
    {
        if (!strcmp(fa.name, ".") || !strcmp(fa.name, ".."))
            continue;

        if (fa.attrib == _A_SUBDIR)
        {
            sprintf(thePath, "%s/%s", path, fa.name);
            findAllCodes(thePath);
            findALLDirs(thePath);
        }
    } while (_findnext(handle, &fa) == 0);

    _findclose(handle);
}

int main()
{
    char path[MAX] = ".";

    printf("计算中...\n");

    findAllCodes(path);
    findALLDirs(path);

    printf("目前你总共写了 %ld 行代码！\n\n", total);
    system("pause");

    return 0;
}
