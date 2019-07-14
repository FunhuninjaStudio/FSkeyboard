#pragma once

#include<Windows.h>

#define FS_KEY_PRESSED -32767

namespace fs {
	class Keyboard
	{
 	 private:
		 
	 public:
	 	int key_int;
	 	char key;

		enum key
		{

		};

		template<typename KEYBOARDTYPE>
		bool KeyPressed(KEYBOARDTYPE _key)
		{
			for (int i = 8; i <= 255; i++)
			{
				if (GetAsyncKeyState(i) == FS_KEY_PRESSED)
				{

					if (i == (int)_key)
					{
						key_int = i;
						key = (char)key_int;

						return true;
					}
					else {
						key_int = NULL;
						key = NULL;
					}
				}
			}
			return false;
		}
		bool KeyPressed()
		{
			for (int i = 8; i <= 255; i++)
			{
				if (GetAsyncKeyState(i) == FS_KEY_PRESSED)
				{
					key_int = i;
					key = (char)key_int;
					return true;
				}
			}
			return false;
		}

	};

}
