#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <iosfwd>
#include <string>
namespace Scanner{
  class ConsumeState;

  class Toker
  {
  public:
    Toker();
    ~Toker();
    bool attach(std::istream* pIn);
    std::string getTok();
    bool canRead();
  private:
    ConsumeState* pConsumer;
  };
}

#endif // TOKENIZER_H
