// class Hero

class hero
{
public:
	hero();
	~hero();
	
	void locate (int x, int y);
	void move_fow();
	void move_back();
	void move_left();
	void move_right();
	void draw();


private:
	int posX;
	int posY;	
};
	
