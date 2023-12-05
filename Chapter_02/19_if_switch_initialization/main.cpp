#include <iostream>

enum Status {
    Waiting,
    Success,
    Fail
};

Status check() {
    return Status::Fail;
}

int main() {
    if (Status s = check(); s != Status::Success) {
	std::cout << "Not success!\n";
    }
    return 0;
}
