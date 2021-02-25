#include "ADE.h"
#include "A/ADEA.h"
#include "B/ADEB.h"
#include "C/ADEC.h"
#include "D/ADED.h"
#include "E/ADEE.h"

namespace ADE {

std::string run() {
  std::string out("ADE");
  out += std::string(SEPARATOR);
  out += ADEA::run();
  out += std::string(SEPARATOR);
  out += ADEB::run();
  out += std::string(SEPARATOR);
  out += ADEC::run();
  out += std::string(SEPARATOR);
  out += ADED::run();
  out += std::string(SEPARATOR);
  out += ADEE::run();
  return out;
}

}