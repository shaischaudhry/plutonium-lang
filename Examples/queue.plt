#Queue Implementation in Plutonium
#Written by Shahryar Ahmad
#29 October 2022
#The following code is free to use/modify and comes without any guarantee or warantee
namespace queue
{
    class Queue
    {
        private var queue = nil
        function __construct__()
        {
            self.queue = ll::List()
        }
        function isEmpty()
        {
            return self.queue.begin() == self.queue.end()
        }
        function enqueue(var val)
        {
            self.queue.insert(self.queue.end(),val)
        }
        function dequeue()
        {
            if(self.isEmpty())
            return nil # or maybe throw an exception?
            var it = self.queue.begin()
            var val = it.value()
            self.queue.erase(it)
            return val
        }
    }
}