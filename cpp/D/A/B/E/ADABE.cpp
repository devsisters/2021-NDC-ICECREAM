#include "ADABE.h"
#include "A/ADABEA.h"
#include "B/ADABEB.h"
#include "C/ADABEC.h"
#include "D/ADABED.h"
#include "E/ADABEE.h"

namespace ADABE {

std::string run() {
  std::string out("ADABE");
  out += std::string(SEPARATOR);
  out += ADABEA::run();
  out += std::string(SEPARATOR);
  out += ADABEB::run();
  out += std::string(SEPARATOR);
  out += ADABEC::run();
  out += std::string(SEPARATOR);
  out += ADABED::run();
  out += std::string(SEPARATOR);
  out += ADABEE::run();
  return out;
}

}