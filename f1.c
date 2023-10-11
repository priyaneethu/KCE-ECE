void main()
{
   int num;
   num=765;
   int fd,sd,ld;
   fd= num %10;
   sd=(num%100)/10;
   ld= num/100;
   fd=(fd+2)%10;
   sd=(sd+2)%10;
   ld=(ld+2)%10;
   num=ld*100+sd*10+fd;
   printf("%d",num);
}
