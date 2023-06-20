#include <cmath>

#include "../include/activations.h"
#include "../include/nn.h"


double sigmoid(double input) {
    return 1.0 / (1.0 + exp(-1.0 * input));
}
