#ifndef ENGINE_H
#define ENGINE_H

class engine: public railroad_car  {
	public: 
		engine() {}
		virtual void display_short_name() { cout << "Engine"; }
};

#endif
