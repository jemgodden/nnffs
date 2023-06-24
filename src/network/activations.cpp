#include <cmath>

#include "../../include/network/activations.h"
#include "../../include/network/network.h"


double sigmoid(double input) {
    return 1.0 / (1.0 + exp(-1.0 * input));
}
