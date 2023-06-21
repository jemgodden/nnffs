#include "../../include/network/network.h"
#include "../../include/matrix/matrix.h"


Network::Network(int inputNodes, int hiddenLayers, int hiddenNodes, int outputNodes) {
    _inputNodes = inputNodes;
    _hiddenLayers = hiddenLayers;
    _hiddenNodes = hiddenNodes;
    _outputNodes = outputNodes;
};

Network::~Network() {
    
};

int Network::inputNodes() {
    return _inputNodes;
};

int Network::hiddenLayers() {
    return _hiddenLayers;
};

int Network::hiddenNodes() {
    return _hiddenNodes;
};

int Network::outputNodes() {
    return _outputNodes;
};

void Network::train() {

};

void Network::predict() {

};
