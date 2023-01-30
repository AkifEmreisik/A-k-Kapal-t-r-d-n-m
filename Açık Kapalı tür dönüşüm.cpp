#include<iostream>

int main(){
	int a=3.55; // "kapaalý tür dönüþüm" int a virgüllü girmiþin virgülü almaz 
	std::cout<<a<< std::endl;
	
	int b{10};
	b=static_cast<int>(5,9); //static_cast dönüþtürür "açýk dönüþüm "
	std::cout<<b<< std::endl; // a nýn içine yaz 
	
	char ch{97};
	std::cout<<static_cast<int>(ch);  /* normalde ne yazmasý lazým 97 nin temsil ettiðikarakteri ama açýk dönüþüm yaparak
static_cast< hangi tip ise>(neyi dönüþtüreceksen) ch yi int olarak dönüþtürüp yazdýk */
	std::cout<<ch; // 97 a yý temsil eden sayýymýþ ki a yazdý ekrana 
	return 0;
}
