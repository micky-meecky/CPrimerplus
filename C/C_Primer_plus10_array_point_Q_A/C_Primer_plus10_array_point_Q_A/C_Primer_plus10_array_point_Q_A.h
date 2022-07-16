#pragma once
#define Month 12
#define Year 5
#define MAX_RAND 999
#define col 5
#define c10 2

void _101(void);
double yearsum(float ar[][Month], int years);
double monthsum(const float(*ar)[Month], int years);
double monthave(const float(*ar)[Month], int years);

void _102(void);
void copy_arr(double ar1[], double s[], int n);
void copy_ptr(double* ar2, double* s, int n);
void copy_ptrs(double ar3[], double* sstart, double* send);

void _10_345(void);
int _10_345_fmax(int a[], int n, int* xb);
int _10_345_fmin(int* a, int n);

void _106(void);
void _106_reverse(double* ar, int n);

void _107(void);
void _107_copy_ptrs(double* ar3, double* sstart, double* send);

void _108(void);

void _109_bc(void);
//void _109_bc_copy(int i, int j, double s[i][j], double t[i][j]);
//void _109_bc_display(int i, int j, double dip[i][j]);

void _109_nbc(void);
void _109_nbc_copy(double s[][col], double t3[][col], int rows);
void _109_nbc_display(double(*disp)[col], int rows);
void _109_nbc_getrc(int* x, int* y, double(*s)[col], int rows);

void _1010(void);
//void _1010_getdigit(int* r, int* c);
void _1010_getdigit(int(*s)[c10], int rows);
void _1010_caculate(int s1[][c10], int s2[][c10], int s3[][c10], int rows);
void _1010_nbc_display(int(*disp)[c10], int rows);

void _1011(void);
void _1011_display(int(*s)[col], int rows);
void _1011_double(int s[][col], int rows);

void _1012(void);
void _1012_generate_array(float r[][Month], int year);
void _1012_display(const float r[][Month], int year);
float _1012_subtot(float r[][Month], int year);
void _1012_yearaverage(float r[][Month], int year);
void _1012_monthaverage(float r[][Month], int year);

void _1013(void);
void _1013_getdata(double a[][col], int rows);
void _1013_checkdata(double a[][col], int rows);
double _1013_eachaver(double*);//函数声明中省略数组名，参数名
double _1013_allaver(double a[][col]);
double _1013_max(double* start, double* end);

//void _1014(void);
//double _1014_aver(int a, double b[a]);
//double _1014_allaver(int b, int c, double a[b][c]);
//double _1014_maxx(int a, int b, double c[a][b]);
