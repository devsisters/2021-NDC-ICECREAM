#include "AAEDE.h"
#include "A/AAEDEA.h"
#include "B/AAEDEB.h"
#include "C/AAEDEC.h"
#include "D/AAEDED.h"
#include "E/AAEDEE.h"

namespace AAEDE {

std::string run() {
  std::string out("AAEDE");
  out += std::string(SEPARATOR);
  out += AAEDEA::run();
  out += std::string(SEPARATOR);
  out += AAEDEB::run();
  out += std::string(SEPARATOR);
  out += AAEDEC::run();
  out += std::string(SEPARATOR);
  out += AAEDED::run();
  out += std::string(SEPARATOR);
  out += AAEDEE::run();
  return out;
}

}