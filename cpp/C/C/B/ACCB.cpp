#include "ACCB.h"
#include "A/ACCBA.h"
#include "B/ACCBB.h"
#include "C/ACCBC.h"
#include "D/ACCBD.h"
#include "E/ACCBE.h"

namespace ACCB {

std::string run() {
  std::string out("ACCB");
  out += std::string(SEPARATOR);
  out += ACCBA::run();
  out += std::string(SEPARATOR);
  out += ACCBB::run();
  out += std::string(SEPARATOR);
  out += ACCBC::run();
  out += std::string(SEPARATOR);
  out += ACCBD::run();
  out += std::string(SEPARATOR);
  out += ACCBE::run();
  return out;
}

}