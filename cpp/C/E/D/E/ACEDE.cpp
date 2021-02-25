#include "ACEDE.h"
#include "A/ACEDEA.h"
#include "B/ACEDEB.h"
#include "C/ACEDEC.h"
#include "D/ACEDED.h"
#include "E/ACEDEE.h"

namespace ACEDE {

std::string run() {
  std::string out("ACEDE");
  out += std::string(SEPARATOR);
  out += ACEDEA::run();
  out += std::string(SEPARATOR);
  out += ACEDEB::run();
  out += std::string(SEPARATOR);
  out += ACEDEC::run();
  out += std::string(SEPARATOR);
  out += ACEDED::run();
  out += std::string(SEPARATOR);
  out += ACEDEE::run();
  return out;
}

}