
int n1=0;
int n2=1;   
int n3=2;

int s1=3;
int s2=4;
int s3=5;

int l1=6;
int l2=7;
int l3=8;
 
int r1=9;
int r2=10;
int r3=11;

void setup()
{
  pinMode(n1, OUTPUT);
  pinMode(n2, OUTPUT);
  pinMode(n3, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
}

void loop()
{
  
 
  digitalWrite(n1, 1);
  digitalWrite(s3, 1);
  digitalWrite(l3, 1);
  digitalWrite(r3, 1);
  delay(1500);
  digitalWrite(n1, 0);
  digitalWrite(s3, 0);
  
  digitalWrite(n2, 1);
  digitalWrite(s2, 1);
  delay(500);
  digitalWrite(n2, 0);
  digitalWrite(s2, 0);

  digitalWrite(s1, 1);
  digitalWrite(n3, 1);
  delay(1500);

  digitalWrite(s1, 0);
  digitalWrite(l3, 0);


  digitalWrite(s2, 1);
  digitalWrite(l2, 1);
  delay(500);

  digitalWrite(s2, 0);
  digitalWrite(l2, 0);


  digitalWrite(s3, 1);
  digitalWrite(l1, 1);
  digitalWrite(r3, 1);
  delay(1500);

  digitalWrite(l1, 0);
  digitalWrite(r3, 0);

  digitalWrite(l2, 1);
  digitalWrite(r2, 1);
  delay(500);

  digitalWrite(l2, 0);
  digitalWrite(r2, 0);

  digitalWrite(l3, 1);
  digitalWrite(r1, 1);
  delay(1500);

  digitalWrite(n3, 0);
  digitalWrite(r1, 0);
  digitalWrite(n1, 0);
  
  digitalWrite(n2, 1);
  digitalWrite(r2, 1);
  delay(500);

  digitalWrite(n2, 0);
  digitalWrite(r2, 0);

  
  
}
