#include<iostream>

int main(){
	int a=3.55; // "kapaal� t�r d�n���m" int a virg�ll� girmi�in virg�l� almaz 
	std::cout<<a<< std::endl;
	
	int b{10};
	b=static_cast<int>(5,9); //static_cast d�n��t�r�r "a��k d�n���m "
	std::cout<<b<< std::endl; // a n�n i�ine yaz 
	
	char ch{97};
	std::cout<<static_cast<int>(ch);  /* normalde ne yazmas� laz�m 97 nin temsil etti�ikarakteri ama a��k d�n���m yaparak
static_cast< hangi tip ise>(neyi d�n��t�receksen) ch yi int olarak d�n��t�r�p yazd�k */
	std::cout<<ch; // 97 a y� temsil eden say�ym�� ki a yazd� ekrana 
	return 0;
}
