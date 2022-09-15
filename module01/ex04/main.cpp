#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char *argv[]) {

	if (argc != 4) {
		return 1;
	}

	std::fstream input_file(argv[1], std::ios::in);
	if (!input_file.is_open()) {
		std::cerr << "Error opening file " << argv[1] << std::endl;
		return 1;
	}

	std::string output_file_name = argv[1] + std::string(".replace");
	std::fstream output_file(output_file_name, std::ios::out);
	if (!output_file.is_open()) {
		std::cerr << "Error creating file " << argv[1] << std::endl;
		input_file.close();
		return 1;
	}

	std::string line;
	while (std::getline(input_file, line)) {
		// size_t index = line.find(argv[2]);
		// if (index == std::string::npos) {

		// 	output_file << line << std::endl;
		// 	continue;
		// }
		// output_file << line.substr(0, index) << argv[3] << line.substr(index + strlen(argv[2])) << std::endl;
		size_t	i = 0;
		while (true) {
			std::cout << "i = " << i << " | line = " << line.substr(i) << std::endl;
			size_t index = line.find(argv[2], i);
			std::cout << "index: " << index << std::endl;
			if (index == std::string::npos) {
				
				output_file << line.substr(i);
				break;
			} else {

				std::cout << "else: " << line.substr(index + strlen(argv[2])) << std::endl;

				output_file << line.substr(0, index) << argv[3];
				i += index + strlen(argv[2]);
			}
		}
		output_file << std::endl;
	
	}
	input_file.close();
	output_file.close();

	return 0;
}