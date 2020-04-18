#include "mcc_generated_files/mcc.h"

void call_number();

void ecran(int nombre) 
{
  
  int nb1 = nombre%10;
  int nb2 = (nombre%100)/10;
  int nb3 = (nombre%1000)/100;
  //int nb4 = (nombre%10000)/1000;  //désactivation du premier digit


  //call_number(nb4);
  //D1_SetHigh();
  //__delay_ms(0.5);
  //D1_SetLow();

  D4_SetLow();

  call_number(nb3);
  D2_SetHigh();
  __delay_ms(1);
  D2_SetLow();
    

  call_number(nb2);
  D3_SetHigh();
  virgule_SetLow();
  __delay_ms(1);
  virgule_SetHigh();
  D3_SetLow();
      

  call_number(nb1);
  D4_SetHigh();
  __delay_ms(1);
}




void call_number(int nb)
{
  if(nb==0)
  {
  pinA_SetLow();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetLow();   
  pinE_SetLow();   
  pinF_SetLow();   
  pinG_SetHigh();   
  }

  else if(nb==1)
  {
  pinA_SetHigh();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetHigh();   
  pinE_SetHigh();   
  pinF_SetHigh();   
  pinG_SetHigh();
  }

  else if(nb==2)
  {  
  pinA_SetLow();   
  pinB_SetLow();   
  pinC_SetHigh();   
  pinD_SetLow();   
  pinE_SetLow();   
  pinF_SetHigh();   
  pinG_SetLow(); 
  }    

  else if(nb==3)
  {
  pinA_SetLow();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetLow();   
  pinE_SetHigh();   
  pinF_SetHigh();   
  pinG_SetLow();
  }
  
  else if(nb==4)
  {
  pinA_SetHigh();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetHigh();   
  pinE_SetHigh();   
  pinF_SetLow();   
  pinG_SetLow();     
  }
  
  else if(nb==5)
  {  
  pinA_SetLow();   
  pinB_SetHigh();   
  pinC_SetLow();   
  pinD_SetLow();   
  pinE_SetHigh();   
  pinF_SetLow();   
  pinG_SetLow();     
  }
  
  else if(nb==6)
  {  
  pinA_SetLow();   
  pinB_SetHigh();   
  pinC_SetLow();   
  pinD_SetLow();   
  pinE_SetLow();   
  pinF_SetLow();   
  pinG_SetLow();     
  }
  
  else if(nb==7)
  {  
  pinA_SetLow();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetHigh();   
  pinE_SetHigh();   
  pinF_SetHigh();   
  pinG_SetHigh();     
  }
  
  else if(nb==8)
  {  
  pinA_SetLow();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetLow();   
  pinE_SetLow();   
  pinF_SetLow();   
  pinG_SetLow();     
  }
  
  else if(nb==9)
  {
  pinA_SetLow();   
  pinB_SetLow();   
  pinC_SetLow();   
  pinD_SetLow();   
  pinE_SetHigh();   
  pinF_SetLow();   
  pinG_SetLow();  
  }   
}

void main(void)
{
    SYSTEM_Initialize();
    int timmer = 0;
    int conversion = 0;
    
    while (1)
    {
        if(timmer==999)
        {
            timmer = 0;
            int tension = ADC_GetConversion(0);
            conversion = (tension/2.048)*10;         
        }
        else
            timmer  += 1;
        ecran(conversion);
    }
}