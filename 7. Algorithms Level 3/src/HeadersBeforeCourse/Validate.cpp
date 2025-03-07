#include "../../include/HeadersBeforeCourse/Validate.hpp"

namespace Validate
{
	char ValidateChar(string message, string messageIfFail) {
		char MyChar;

		cout << message; cin >> MyChar;

		while (cin.fail()) {

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << messageIfFail; cin >> MyChar;
		}

		return MyChar;
	}
}