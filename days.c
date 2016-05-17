int main () {

struct date {
 int month;
int day;
int year;
 };

struct date d1, d2, N, N1, N2, x;
 int daynumber(struct date d);
 int elapsedDays;
 int days_between(struct date d1, struct date d2);

printf ("Enter date 1 (MM/DD/YYYY): ");
 scanf ("%d/%d/%d", &d1.month, &d1.day, &d1.year);
 printF("\n");

if ( d1.month <= 2 )
//suppose to be something with f(year, month).
 // if( month <= 2){
 // f(year, month) = year - 1; g(month) = month + 13;
 {
int year = d1.year - 1;
 int month = d1.month + 13;
 }
 else
 {
 year = d1.year;
 month = d1.month + 1;
 }

printf ("Enter date 2 (MM/DD/YYYY): ");
 scanf ("%d/%d/%d", &d2.month, &d2.day, &d2.year);
 printF("\n");

if ( d2.month <= 2 )
{
year = d2.year - 1;
 month = d2.month + 13;
 ?}
 else
{
year = d2.year;
 month = d2.month + 1;
 }
 if( d1 >= 03/01/1800 && d1 <= 02/28/1900)
 {
 N = N+1;
 }
 else if( d1 >= 03/01/1700 && d1 <= 02/28/1800)
 {
 N = N+2;
 }
 if( d2 >= 03/01/1800 && d2 <= 02/28/1900)
 {
 N = N+1;
 }
 else if( d2 >= 03/01/1700 && d2 <= 02/28/1800)
 {
 N = N+2;
 }
 // Computes N
 int daynumber(struct date d)
 {
 N1 = 1461 * f(d1.year,d1.month) / 4 + 153 * g(d1.month) / 5 + d1.day;
 N2 = 1461 * f(d2.year,d2.month) / 4 + 153 * g(d2.month) / 5 + d2.day;
 }

// Computes elapsed days between two dates
 int days_between(struct date d1, struct date d2)
 {
 elapsedDays = N2 - N1;

return elapsedDays;
 }

// Function to determine if date d is before date x
 int isbefore(struct date d, struct date x);
int isbefore(struct date d, struct date x)
 {

if ( d < x )
x = 1;
else
 x = 0;
return x;
 }

printf ("There are %d days between %d/%d/%d and %d/%d/%d",
elapsedDays, d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
 printF("\n");

return 0;
}
