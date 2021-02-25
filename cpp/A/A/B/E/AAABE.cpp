#include "AAABE.h"
#include "A/AAABEA.h"
#include "B/AAABEB.h"
#include "C/AAABEC.h"
#include "D/AAABED.h"
#include "E/AAABEE.h"

namespace AAABE {

std::string run() {
  std::string out("AAABE");
  out += std::string(SEPARATOR);
  out += AAABEA::run();
  out += std::string(SEPARATOR);
  out += AAABEB::run();
  out += std::string(SEPARATOR);
  out += AAABEC::run();
  out += std::string(SEPARATOR);
  out += AAABED::run();
  out += std::string(SEPARATOR);
  out += AAABEE::run();
  return out;
}

}