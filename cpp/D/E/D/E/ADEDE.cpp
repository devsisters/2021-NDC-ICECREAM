#include "ADEDE.h"
#include "A/ADEDEA.h"
#include "B/ADEDEB.h"
#include "C/ADEDEC.h"
#include "D/ADEDED.h"
#include "E/ADEDEE.h"

namespace ADEDE {

std::string run() {
  std::string out("ADEDE");
  out += std::string(SEPARATOR);
  out += ADEDEA::run();
  out += std::string(SEPARATOR);
  out += ADEDEB::run();
  out += std::string(SEPARATOR);
  out += ADEDEC::run();
  out += std::string(SEPARATOR);
  out += ADEDED::run();
  out += std::string(SEPARATOR);
  out += ADEDEE::run();
  return out;
}

}