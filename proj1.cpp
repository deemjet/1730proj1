#include "proj1.h"
using namespace std;

int count1 = 0, count2 = 0;

void arithmetic(int e, int v[])
{
  int a, b, c, d, total;
  int values[5];
  string op1, op2, op3, op4;

total = e;
values[0] = v[0];
values[1] = v[1];
values[2] = v[2];
values[3] = v[3];
values[4] = v[4];

for (int i = 0; i < 5; ++i)
{
	if (i == 0)
	{a = values[0] + values[1]; op1 = "+";}
	if (i == 1)
	{a = values[0] - values[1]; op1 = "-";}
	if (i == 2)
	{a = values[0] * values[1]; op1 = "*";}
	if (i == 3)
	{a = values[0] / values[1]; op1 = "/";}
	if (i == 4)
	{a = values[0] % values[1]; op1 = "%";}
	
	for (int j = 0; j < 5; ++j)
	{
		if (j == 0)
		{b = a + values[2]; op2 = "+";}
		if (j == 1)
		{b = a - values[2]; op2 = "-";}
		if (j == 2)
		{b = a * values[2]; op2 = "*";}
		if (j == 3)
		{b = a / values[2]; op2 = "/";}
		if (j == 4)
		{b = a % values[2]; op2 = "%";}
		
		for (int k = 0; k < 5; ++k)
		{
			if (k == 0)
			{c = b + values[3]; op3 = "+";}
			if (k == 1)
			{c = b - values[3]; op3 = "-";}
			if (k == 2)
			{c = b * values[3]; op3 = "*";}
			if (k == 3)
			{c = b / values[3]; op3 = "/";}
			if (k == 4)
			{c = b % values[3]; op3 = "%";}
			
			for(int l = 0; l < 5; ++l)
			{
				if(l == 0)
				{d = c + values[4]; op4 = "+";}
				if(l == 1)
				{d = c - values[4]; op4 = "-";}
				if(l == 2)
				{d = c * values[4]; op4 = "*";}
				if(l == 3)
				{d = c / values[4]; op4 = "/";}
				if(l == 4)
				{d = c % values[4]; op4 = "%";}
				
				if(d == total)
				{
					++count1;
					cout << "(((" << values[0] << op1 << values[1] << ")" << op2 << values[2] << ")" << op3 << values[3] << ")" << op4 << values[4]<< endl;
				}
			}
		}
	}
}

}


void bitwise(int x, int f[])
	{
	 
  int a, b, c, d, total;
  int values[5];
  string op1, op2, op3, op4;

total = x;
values[0] = f[0];
values[1] = f[1];
values[2] = f[2];
values[3] = f[3];
values[4] = f[4];

for (int i = 0; i < 5; ++i)
{
	if (i == 0)
	{a = values[0] & values[1]; op1 = "&";}
	if (i == 1)
	{a = values[0] | values[1]; op1 = "|";}
	if (i == 2)
	{a = values[0] ^ values[1]; op1 = "^";}
	if (i == 3)
	{a = values[0] >> values[1]; op1 = ">>";}
	if (i == 4)
	{a = values[0] << values[1]; op1 = "<<";}
	
	for (int j = 0; j < 5; ++j)
	{
		if (j == 0)
		{b = a & values[2]; op2 = "&";}
		if (j == 1)
		{b = a | values[2]; op2 = "|";}
		if (j == 2)
		{b = a ^ values[2]; op2 = "^";}
		if (j == 3)
		{b = a >> values[2]; op2 = ">>";}
		if (j == 4)
		{b = a << values[2]; op2 = "<<";}
		
		for (int k = 0; k < 5; ++k)
		{
			if (k == 0)
			{c = b & values[3]; op3 = "&";}
			if (k == 1)
			{c = b | values[3]; op3 = "|";}
			if (k == 2)
			{c = b ^ values[3]; op3 = "^";}
			if (k == 3)
			{c = b >> values[3]; op3 = ">>";}
			if (k == 4)
			{c = b << values[3]; op3 = "<<";}
			
			for(int l = 0; l < 5; ++l)
			{
				if(l == 0)
				{d = c & values[4]; op4 = "&";}
				if(l == 1)
				{d = c | values[4]; op4 = "|";}
				if(l == 2)
				{d = c ^ values[4]; op4 = "^";}
				if(l == 3)
				{d = c >> values[4]; op4 = ">>";}
				if(l == 4)
				{d = c << values[4]; op4 = "<<";}
				
				if(d == total)
				{
					++count2;
					cout << "(((" << values[0] << op1 << values[1] << ")" << op2 << values[2] << ")" << op3 << values[3] << ")" << op4 << values[4]<< endl;
				}
			}
		}
	}
 }
 }


void swap(int tot, int vals[], bool det)
{
  bool xyz = det;
  int val[5] = {vals[0], vals[1], vals[2], vals[3], vals[4]};
  int sum = tot;
  sort(val, val + 5); 

 do
{ 
  if(xyz)
    arithmetic(sum, val);
  else
    bitwise(sum, val);
 }
 while(next_permutation(val, val+5));


 if(xyz)
   cout << count1 << " arithmetic expressions found that evaluate to " << sum << "." << endl;
 else 
   cout << count2 << " bitwise expressions found that evaluate to " << sum << "." << endl;
}