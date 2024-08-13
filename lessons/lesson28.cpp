#include <iostream>

using text = std::string;

text concat(text t1, text t2);
text concat(text t1, text t2, text t3);


int main() {
    std::cout << concat("Hello ", "World\n");
    std::cout << concat("Pizza ", "Peperoni ", "Mushrooms\n");

    return 0;
}


text concat(text t1, text t2) {
    text res;
    return res.append(t1).append(t2);
}

text concat(text t1, text t2, text t3) {
    text res;
    return res.append(t1).append(t2).append(t3);
}