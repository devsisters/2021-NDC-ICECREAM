#include "ACDED.h"
#include "A/ACDEDA.h"
#include "B/ACDEDB.h"
#include "C/ACDEDC.h"
#include "D/ACDEDD.h"
#include "E/ACDEDE.h"

namespace ACDED {

std::string run() {
  std::string out("ACDED");
  out += std::string(SEPARATOR);
  out += ACDEDA::run();
  out += std::string(SEPARATOR);
  out += ACDEDB::run();
  out += std::string(SEPARATOR);
  out += ACDEDC::run();
  out += std::string(SEPARATOR);
  out += ACDEDD::run();
  out += std::string(SEPARATOR);
  out += ACDEDE::run();
  return out;
}

}