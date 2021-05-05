1) The complete challenge is performed on Linux platform using C++ language

2) After cloning you will get 'CMakeLists.txt' and 'main.cpp' files apart from readme in the Intent_Recognizer folder.

3) You can build by commands: mkdir build -> cd build -> cmake .. -> make

4) The projet name given here is 'intent_rec'

5) To test the script, give command: ./intent_rec 'command line argument'
	
	eg1: ./intent_rec What is the weather like today?
	output: Get Weather

6) The script is written in a way that it compares the keywords of the entered CLA.
	
	eg2: ./intent_rec what is weather like today 
	above eg2. will also give the correct output 'Get Weather' though we are skipping 'the' and '?' and using lowercase 'w'.
	Keyword here used is 'weather like today'

	eg3: ./intent_rec Tell me an interesting fact. (or) ./intent_rec tell interenting fact?
	output: Get Fact