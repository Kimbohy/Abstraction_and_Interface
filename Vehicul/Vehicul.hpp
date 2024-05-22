#ifndef VEHICUL_HPP
#define VEHICUL_HPP

class Vehicul 
{
	public:
		Vehicul();
		~Vehicul();
		virtual void conduire() = 0;
		void affichePosition();
	protected:
		int positionX = 0;
};

#endif