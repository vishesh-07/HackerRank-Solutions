    static int B;
    static int H;
    static boolean flag;
    static{
      Scanner sc=new Scanner(System.in);
       B=sc.nextInt();
       H=sc.nextInt();
       if(B>0 && H>0){
           flag=true;
       }else{
           flag=false;
           System.out.print("java.lang.Exception: Breadth and height must be positive");
       }
}
