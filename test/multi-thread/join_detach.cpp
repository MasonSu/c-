#include <iostream>
#include <thread>

class ThreadRAII
{
  std::thread & m_thread;
public:
  ThreadRAII(std::thread  & threadObj) : m_thread(threadObj)
  {

  }
  ~ThreadRAII()
  {
    // Check if thread is joinable then detach the thread
    if (m_thread.joinable())
    {
      m_thread.detach();
    }
  }
};

void thread_function()
{
  std::cout << "thread_function Executing" << std::endl;
}

int main()
{
  std::thread threadObj(thread_function);

  // If we comment this Line, then program will crash
  ThreadRAII wrapperObj(threadObj);
  return 0;
}