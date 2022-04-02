#include "Bureaucrate.hpp"
/*
int main()
{
    Bureaucratee lil;
    lil.setGrade(15);
    lil.setName("My little ponney");
    Bureaucratee lol(lil);
    std::cout << "Name ::" << lol.getName() << "Grade" << lol.getGrade() << std::endl;

return(0);
}*/


int main(void) {

	Bureaucrate*	Gwendo;
	Bureaucrate*	Lionel;
	Bureaucrate*	George;
	Bureaucrate*	Simon;

	try{
		Gwendo = new Bureaucrate("Gwendolyne", 1);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}
	try{
		Lionel = new Bureaucrate("Lionel", 150);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}
	try{	
		George = new Bureaucrate("George", 0);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}
	try{	
		Simon = new Bureaucrate("Simon", 151);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Gwendo << std::endl << *Lionel << std::endl;

	try{
		Gwendo->upGrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Gwendo << std::endl;

	try{
		Gwendo->downGrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Gwendo << std::endl;

	try{
		Lionel->downGrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Lionel << std::endl;

	try{
		Lionel->upGrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Lionel << std::endl;

	delete Gwendo;
	delete Lionel;

	return 0;
}
