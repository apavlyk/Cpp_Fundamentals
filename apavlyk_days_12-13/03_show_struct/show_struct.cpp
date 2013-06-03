#include <iostream>
size_t  const SIZE = 40;

struct box {
	char maker[SIZE];
	float height;
	float width;
	float length;
	float volume;
};

void populate_box_data(box *);
float calculate_box_volume(box *);
void show_box(box);
void clear_stream(void);
bool quit(void);

int main()
{
	do
	{
		box * box_data = new box;
		populate_box_data(box_data);
		box_data->volume = calculate_box_volume(box_data);
		show_box(*box_data);
		delete box_data;

	} while (!quit());	
	
	return EXIT_SUCCESS;
}

void populate_box_data(box * ps)
{	
	std::cout << "Input box maker: ";
	std::cin.getline(ps->maker, SIZE);
	std::cout << "Input box height: ";
	std::cin >> ps->height;
	std::cout << "Input box width: ";
	std::cin >> ps->width;
	std::cout << "Input box length: ";
	std::cin >> ps->length;
	clear_stream();
}


float calculate_box_volume(box * ps)
{
	float volume = ps->width * ps->length * ps->height;
	return volume;
}

void show_box(box box_info)
{
	using namespace std;

	cout << "Box maker: " << box_info.maker << endl;
	cout << "Box height: " << box_info.height << endl;
	cout << "Box width: " << box_info.width << endl;
	cout << "Box length: " << box_info.length << endl;	
	cout << "Box volume: " << box_info.volume << endl;
}

bool quit(void)
{
	using namespace std;	
	char ch;
	bool exit;
	cout << "Want to quit (Y/N)?: ";
	cin.get(ch);
	if ('Y' == ch || 'y' == ch) {
		exit = true; }
	else {
		clear_stream();
		exit = false; }

	return exit;
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}