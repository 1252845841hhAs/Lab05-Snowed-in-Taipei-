 int level;
   int size;
   cin>> level;
   cin>> size;
   srand(time(NULL));
   int source=0;
   int source1;
   source1=100/size;
   if(level==1||level==2){
   	
   for(size;size>0;size--){
   	
   	int type=rand()%2;
	   if(type==0){
	   	int a=rand()%100;
	   	int b=rand()%100;
	   	int result;
	   	result=a+b;
	   	cout<<a;
	   	cout<<"+";
	   	cout<<b;
	   	cout<<"=";
	   	int student;
	   	cin>>student;
	   	if(student==result){
	   		source=source+source1;
		   }
	   	
	   	
	   	
	   }   	
   	
   	if(type==1){
	   	int a=rand()%100;
	   	int b=rand()%100;
	   	int result;
	   	result=a-b;
	  	cout<<a;
	   	cout<<"-";
	   	cout<<b;
	   	cout<<"=";
	    int student;
	   	cin>>student;
	   	if(student==result){
	   		source=source+source1;
		   }
	   	
	   	
	   	
	   }   	
   	
   	
   	
   	
   }	
     cout<<"end! ";
     cout<<source;
   	
   	
   	
   	
   }
