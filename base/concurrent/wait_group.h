#ifndef BASE_CONCURRENT_WAIT_GROUP_H_
#define BASE_CONCURRENT_WAIT_GROUP_H_

#include <condition_variable>
#include <mutex>

namespace concurrent {

// WaitGroup provides a simple synchronization mechanism.
// The usage is the same as WaitGroup in golang. c.f. http://golang.org/pkg/sync/#WaitGroup
class WaitGroup {
public:
    WaitGroup();

    void add(int n);
    void done();

    void wait_until_done();

private:
    std::mutex mu_;
    std::condition_variable cond_var_;
    int num_;
};

} // namespace concurrent

#endif // BASE_CONCURRENT_WAIT_GROUP_H_
