#ifndef FEED_FORWARD_NET_HPP
#define FEED_FORWARD_NET_HPP

#include "net.hpp"
#include "commonDefs.hpp"
#include "ffNeuron.hpp"

// Abstract class
class FeedForwardNet : public Net
{
public:
    FeedForwardNet(const std::vector<unsigned> &topology, const bool &bias);
    virtual ~FeedForwardNet();

    double getRecentAverageError() const;
    virtual void learn(const std::vector<double> &targetVals);

protected:
    double m_error;
    double m_recentAverageError;
    double m_recentAverageSmoothingFactor;
};

#endif /* FEED_FORWARD_NET_HPP */
