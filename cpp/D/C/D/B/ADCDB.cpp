#include "ADCDB.h"
#include "A/ADCDBA.h"
#include "B/ADCDBB.h"
#include "C/ADCDBC.h"
#include "D/ADCDBD.h"
#include "E/ADCDBE.h"

namespace ADCDB {

std::string run() {
  std::string out("ADCDB");
  out += std::string(SEPARATOR);
  out += ADCDBA::run();
  out += std::string(SEPARATOR);
  out += ADCDBB::run();
  out += std::string(SEPARATOR);
  out += ADCDBC::run();
  out += std::string(SEPARATOR);
  out += ADCDBD::run();
  out += std::string(SEPARATOR);
  out += ADCDBE::run();
  return out;
}

}