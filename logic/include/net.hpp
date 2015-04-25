//------------------------------------------------------
//Author             : Jonathan Schwarz
//University         : Pforzheim University
//Date of last edit  : Mon, 15 Sep 2014 16:09:44 +0200
//Filename           : net.hpp
//------------------------------------------------------

#ifndef NET_HPP
#define NET_HPP

#include <vector>
#include <iostream>
#include <cstdlib>
//#include <cassert>
#include <cmath>
//#include <fstream>
//#include <sstream>

#include "commonDefs.hpp"
#include "neuron.hpp"

using std::vector;

// Abstract class
class Net
{
public:
    Net();
    virtual ~Net();

    virtual void learn(const vector<double> &targetVals) = 0;
    void feedForward(const vector<double> &inputVals);

    void getResults(vector<double> &resultVals) const;
    vector<vector<vector<Connection> > > getConnections() const;

    void setConnections(const vector<vector<vector<Connection> > > &connections);

    vector<Layer> m_layers;
protected:
    bool m_bias;
};

#endif /* NET_HPP */
